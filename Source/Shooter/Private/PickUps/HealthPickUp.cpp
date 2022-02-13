// Shooter Game All the Rights Reserved


#include "PickUps/HealthPickUp.h"
#include "Player/HealthComponent.h"
#include "ShooterUtils.h"

DEFINE_LOG_CATEGORY_STATIC(LogHealthPickUp, All, All);

bool AHealthPickUp::GivePickupTo(APawn* PlayerPawn)
{
	const auto HealthComponent = ShooterUtils::GetPlayerComponent<UHealthComponent>(PlayerPawn);
	if (!HealthComponent) return false;

	return HealthComponent->ChangeHealth(HealthAmount);
		
	
}