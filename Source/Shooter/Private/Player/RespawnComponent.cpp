// Shooter Game All the Rights Reserved


#include "Player/RespawnComponent.h"
#include "GM_Shooter.h"


URespawnComponent::URespawnComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void URespawnComponent::Respawn(int32 RespawnTime)
{
	if (!GetWorld()) return;

	RespawnCountDown = RespawnTime;
	GetWorld()->GetTimerManager().SetTimer(RespawnTimerHandle, this, &URespawnComponent::RespawnTimerUpdate, 1.0f, true);

}

void URespawnComponent::RespawnTimerUpdate()
{
	if (--RespawnCountDown == 0)
	{
		if (!GetWorld()) return;
		GetWorld()->GetTimerManager().ClearTimer(RespawnTimerHandle);

		const auto GameMode = Cast<AGM_Shooter>(GetWorld()->GetAuthGameMode());
		if (!GameMode) return;

		GameMode->RespawnRequest(Cast<AController>(GetOwner()));
	}
}