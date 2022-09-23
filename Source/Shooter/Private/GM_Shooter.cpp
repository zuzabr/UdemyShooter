// Shooter Game All the Rights Reserved


#include "GM_Shooter.h"
#include "Player/DefaultChar.h"
#include "Player/PlayerControllerShooter.h"
#include "UI/DefaultHUD.h"
#include "AIController.h"



AGM_Shooter::AGM_Shooter() 
{
	DefaultPawnClass = ADefaultChar::StaticClass();
	PlayerControllerClass = APlayerControllerShooter::StaticClass();
	HUDClass = ADefaultHUD::StaticClass();
}

void AGM_Shooter::StartPlay()
{
	Super::StartPlay();

	SpawnBots();

	CurrentRound = 1;
	StartRound();
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
			UE_LOG(LogTemp, Display, TEXT("------------------Game Over--------------"));
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
}