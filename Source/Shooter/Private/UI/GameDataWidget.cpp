// Shooter Game All the Rights Reserved


#include "UI/GameDataWidget.h"
#include "Player/ShooterPlayerState.h"
#include "GM_Shooter.h"

int32 UGameDataWidget::GetKillsNum() const
{
	const auto PlayerState = GetPlayerState();
	return PlayerState ? PlayerState->GetKillsNum() : 0;
}

int32 UGameDataWidget::GetCurrentRoundNum() const
{
	const auto GameMode = GetGameMode();
	return GameMode ? GameMode->GetCurrentRoundNum() : 0;
}

int32 UGameDataWidget::GetTotalRoundsNum() const
{
	const auto GameMode = GetGameMode();
	return GameMode ? GameMode->GetGameData().RoundNum : 0;
}

int32 UGameDataWidget::GetRoundSecondsRemain() const
{
	const auto GameMode = GetGameMode();
	return GameMode ? GameMode->GetRoundSecondsRemain() : 0;
}

AGM_Shooter* UGameDataWidget::GetGameMode() const
{
	return GetWorld() ? Cast<AGM_Shooter>(GetWorld()->GetAuthGameMode()) : nullptr;
}

AShooterPlayerState* UGameDataWidget::GetPlayerState() const
{
	return GetOwningPlayer() ? Cast<AShooterPlayerState>(GetOwningPlayer()->PlayerState) : nullptr;
}