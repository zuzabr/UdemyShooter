// Shooter Game All the Rights Reserved


#include "UI/GameOverWidget.h"
#include "GM_Shooter.h"
#include "Player/ShooterPlayerState.h"
#include "UI/StatisticWidget.h"
#include "Components/VerticalBox.h"
#include "ShooterUtils.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UGameOverWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (GetWorld())
	{
		const auto GameMode = Cast<AGM_Shooter>(GetWorld()->GetAuthGameMode());
		if (GameMode)
		{
			GameMode->OnMatchStateChanged.AddUObject(this, &UGameOverWidget::OnMatchStateChanged); // Привязка к делегату
		}
	}

	if (RestartLevelButton)
	{
		RestartLevelButton->OnClicked.AddDynamic(this, &UGameOverWidget::OnRestartLevel);
	}
	
	
}

void  UGameOverWidget::OnMatchStateChanged(EMatchState State)
{
	if (State == EMatchState::GameOver)
	{
		UpdatePlayerStat();
	}
}

void  UGameOverWidget::UpdatePlayerStat()
{
	if (!GetWorld() || !PlayerStatBox) return;

	PlayerStatBox->ClearChildren();

	for (auto It = GetWorld()->GetControllerIterator(); It; ++It)
	{
		const auto Controller = It->Get();
		if (!Controller) continue;

		const auto PlayerState = Cast<AShooterPlayerState>(Controller->PlayerState);
		if (!PlayerState) continue;

		const auto PlayerStatWidget = CreateWidget<UStatisticWidget>(GetWorld(), PlayerStatWidgetClass);
		if (!PlayerStatWidget) continue;

		PlayerStatWidget->SetPlayerName(FText::FromString(PlayerState->GetPlayerName()));
		PlayerStatWidget->SetKillsText(ShooterUtils::TextFromInt(PlayerState->GetKillsNum()));
		PlayerStatWidget->SetDeathsText(ShooterUtils::TextFromInt(PlayerState->GetDeathsNum()));
		PlayerStatWidget->SetTeamText(ShooterUtils::TextFromInt(PlayerState->GetTeamID()));
		PlayerStatWidget->SetPlayerImageVisibility(Controller->IsPlayerController());

		PlayerStatBox->AddChild(PlayerStatWidget);
	}
}

void UGameOverWidget::OnRestartLevel()
{
	
	const FString CurrentLvlName = UGameplayStatics::GetCurrentLevelName(this);
	UGameplayStatics::OpenLevel(this, FName(CurrentLvlName));
}