// Shooter Game All the Rights Reserved


#include "Player/PlayerControllerShooter.h"
#include "Player/RespawnComponent.h"
#include "GM_Shooter.h"
#include "ShooterGameInstance.h"

APlayerControllerShooter::APlayerControllerShooter()
{
	RespawnComponent = CreateDefaultSubobject<URespawnComponent>("RespawnComponent");
}

void APlayerControllerShooter::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld())
	{
		const auto GameMode = Cast<AGM_Shooter>(GetWorld()->GetAuthGameMode());
		if (GameMode)
		{
			GameMode->OnMatchStateChanged.AddUObject(this, &APlayerControllerShooter::OnMatchStateChanged); // Привязка к делегату
		}
	}
}

void APlayerControllerShooter::OnMatchStateChanged(EMatchState State)
{
	if (State == EMatchState::InProgress)
	{
		SetInputMode(FInputModeGameOnly());
		bShowMouseCursor = false;
	}
	else
	{
		SetInputMode(FInputModeUIOnly());
		bShowMouseCursor = true;
	}
}

void APlayerControllerShooter::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (!InputComponent) return;

	InputComponent->BindAction("PauseGame", IE_Pressed, this, &APlayerControllerShooter::OnPauseGame);
	InputComponent->BindAction("Mute", IE_Pressed, this, &APlayerControllerShooter::OnMuteSound);
}

void APlayerControllerShooter::OnPauseGame()
{
	if (!GetWorld() || !GetWorld()->GetAuthGameMode()) return;

	GetWorld()->GetAuthGameMode()->SetPause(this);
}

void APlayerControllerShooter::OnMuteSound()
{
	if (!GetWorld()) return;
	const auto GameInstance = GetWorld()->GetGameInstance<UShooterGameInstance>();
	if (!GameInstance) return;

	GameInstance->ToggleVolume();
}