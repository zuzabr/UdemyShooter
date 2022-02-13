// Shooter Game All the Rights Reserved


#include "PickUps/AmmoPickUp.h"
#include "Player/HealthComponent.h"
#include "Weapon/WeaponComponent.h"
#include "ShooterUtils.h"

DEFINE_LOG_CATEGORY_STATIC(LogAmmoPickUp, All, All);

bool AAmmoPickUp::GivePickupTo(APawn* PlayerPawn)
{
	const auto HealthComponent = ShooterUtils::GetPlayerComponent<UHealthComponent>(PlayerPawn);
	if (!HealthComponent || HealthComponent->IsDead()) return false;
	
	const auto WeaponComponent = ShooterUtils::GetPlayerComponent<UWeaponComponent>(PlayerPawn);
	if (!WeaponComponent) return false;
	return WeaponComponent->TryToAddAmmo(WeaponType, ClipsAmount);
	
}