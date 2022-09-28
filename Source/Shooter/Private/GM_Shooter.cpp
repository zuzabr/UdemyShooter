// Shooter Game All the Rights Reserved


#include "GM_Shooter.h"
#include "Player/DefaultChar.h"
#include "Player/PlayerControllerShooter.h"
#include "UI/DefaultHUD.h"
#include "AIController.h"
#include "Player/ShooterPlayerState.h"
#include "ShooterUtils.h"
#include "Player/RespawnComponent.h"
#include "EngineUtils.h" // чтобы получить всех акторов определенного типа


constexpr static int32 MinRoundTimeForRespawn = 10;

AGM_Shooter::AGM_Shooter() 
{
	DefaultPawnClass = ADefaultChar::StaticClass();
	PlayerControllerClass = APlayerControllerShooter::StaticClass();
	HUDClass = ADefaultHUD::StaticClass();
	PlayerStateClass = AShooterPlayerState::StaticClass();
}

void AGM_Shooter::StartPlay()
{
	Super::StartPlay();

	SpawnBots();
	CreateTeamsInfo();
	CurrentRound = 1;
	StartRound();

	SetMatchState(EMatchState::InProgress);
}

UClass* AGM_Shooter::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	if (InController && InController->IsA<AAIController>())
	{
		return AIPawnClass;
	}
	return Super::GetDefaultPawnClassForController_Implementation(InController);
}

void AGM_Shooter::SpawnBots()
{
	if (!GetWorld()) return;

	for (int32 i = 0; i < GameData.PlayersNum - 1; ++i)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		const auto NPCController = GetWorld()->SpawnActor<AAIController>(AIControllerClass, SpawnInfo);
		RestartPlayer(NPCController);
	}
}

void AGM_Shooter::StartRound()
{
	RoundCountDown = GameData.RoundTime;
	GetWorldTimerManager().SetTimer(GameRoundTimerHandle, this, &AGM_Shooter::GameTimerUpdate, 1.0f, true);
}

void AGM_Shooter::GameTimerUpdate()
{
	
	if (--RoundCountDown == 0)
	{
		GetWorldTimerManager().ClearTimer(GameRoundTimerHandle);

		if (CurrentRound + 1 <= GameData.RoundNum)
		{
			++CurrentRound;
			ResetPlayers();
			StartRound();
		}
		else
		{
			GameOver();
		}
	}
}

void AGM_Shooter::ResetPlayers()
{
	if (!GetWorld()) return;

	for (auto It = GetWorld()->GetControllerIterator(); It; ++It)
	{
		ResetOnePlayer(It->Get());
	}
}

void AGM_Shooter::ResetOnePlayer(AController* Controller)
{
	if (Controller && Controller->GetPawn())
	{
		Controller->GetPawn()->Reset();
	}
	RestartPlayer(Controller);
	SetPlayerColor(Controller);
}

void AGM_Shooter::CreateTeamsInfo()
{
	if (!GetWorld()) return;

	int32 TeamID = 1;
	for (auto It = GetWorld()->GetControllerIterator(); It; ++It)
	{
		const auto Controller = It->Get();
		if (!Controller) continue;

		const auto PlayerState = Cast<AShooterPlayerState>(Controller->PlayerState);
		if (!PlayerState) continue;

		PlayerState->SetTeamID(TeamID);
		PlayerState->SetTeamColor(DetermineColorByTeamID(TeamID));
		PlayerState->SetPlayerName(Controller->IsPlayerController() ? "Player" : "NPC");
		SetPlayerColor(Controller);
		TeamID = TeamID == 1 ? 2 : 1;

	}

}

FLinearColor AGM_Shooter::DetermineColorByTeamID(int32 TeamID) const
{
	if (TeamID - 1 < GameData.TeamColors.Num())
	{
		return GameData.TeamColors[TeamID - 1];
	}

	return GameData.DefaultTeamColor;
}

void AGM_Shooter::SetPlayerColor(AController* Controller)
{
	if (!Controller) return;
	const auto Character = Cast<ADefaultChar>(Controller->GetPawn());
	if (!Character) return;

	const auto PlayerState = Cast<AShooterPlayerState>(Controller->PlayerState);
	if (!PlayerState) return;

	Character->SetPlayerColor(PlayerState->GetTeamColor());
}

void AGM_Shooter::Killed(AController* KillerController, AController* VictimController)
{
	const auto KillerPlayerState = KillerController ? Cast<AShooterPlayerState>(KillerController->PlayerState) : nullptr;
	const auto VictimPlayerState = VictimController ? Cast<AShooterPlayerState>(VictimController->PlayerState) : nullptr;

	if (KillerPlayerState)
	{
		KillerPlayerState->AddKill();
	}

	if (VictimPlayerState)
	{
		VictimPlayerState->AddDeath();
	}

	StartRespawn(VictimController);
}

void AGM_Shooter::LogPlayerInfo()
{
	if (!GetWorld()) return;

	int32 TeamID = 1;
	for (auto It = GetWorld()->GetControllerIterator(); It; ++It)
	{
		const auto Controller = It->Get();
		if (!Controller) continue;

		const auto PlayerState = Cast<AShooterPlayerState>(Controller->PlayerState);
		if (!PlayerState) continue;

		PlayerState->LogInfo();
	}

}

void AGM_Shooter::StartRespawn(AController* Controller)
{
	const auto RespawnAvailable = RoundCountDown > MinRoundTimeForRespawn + GameData.RespawnTime;
	if (!RespawnAvailable) return;
	const auto RespawnComp = ShooterUtils::GetPlayerComponent<URespawnComponent>(Controller);
	if (!RespawnComp) return;

	RespawnComp->Respawn(GameData.RespawnTime);
}

void AGM_Shooter::RespawnRequest(AController* Controller)
{
	ResetOnePlayer(Controller);
}

void AGM_Shooter::GameOver()
{
	UE_LOG(LogTemp, Display, TEXT("------------------Game Over--------------"));
	LogPlayerInfo();

	for (auto Pawn : TActorRange<APawn>(GetWorld()))
	{
		if (Pawn)
		{
			Pawn->TurnOff();
			Pawn->DisableInput(nullptr);
		}
	}

	SetMatchState(EMatchState::GameOver);
}

void AGM_Shooter::SetMatchState(EMatchState State)
{
	if (MatchState == State) return;
	MatchState = State;
	OnMatchStateChanged.Broadcast(MatchState);
}

bool AGM_Shooter::SetPause(APlayerController* PC, FCanUnpause CanUnpauseDelegate)
{
	const auto PauseSet = Super::SetPause(PC, CanUnpauseDelegate);
	if (PauseSet)
	{
		SetMatchState(EMatchState::Pause);
	}
	return PauseSet;
}

bool AGM_Shooter::ClearPause()
{
	const auto PauseCleared = Super::ClearPause();
	if (PauseCleared)
	{
		SetMatchState(EMatchState::InProgress);
	}

	return PauseCleared;
}