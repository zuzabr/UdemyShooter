// Shooter Game All the Rights Reserved


#include "UI/SpectatorWidget.h"
#include "Player/RespawnComponent.h"
#include "ShooterUtils.h"

bool USpectatorWidget::GetRespawnTime(int32& CountDownTime) const
{
	const auto RespawnComp = ShooterUtils::GetPlayerComponent<URespawnComponent>(GetOwningPlayer());
	if (!RespawnComp || !RespawnComp->IsRespawnInProgress()) return false;

	CountDownTime = RespawnComp->GetRespawnCountDown();
	return true;
}
