// Shooter Game All the Rights Reserved


#include "UI/PlayerHUDWidget.h"
#include "Player/HealthComponent.h"
#include "Weapon/WeaponComponent.h"
#include "Player/HealthComponent.h"
#include "ShooterUtils.h"

float UPlayerHUDWidget::GetHealthPercent() const
{
	
	const auto HealthComponent = ShooterUtils::GetPlayerComponent<UHealthComponent>(GetOwningPlayerPawn());
	if (!HealthComponent) return 0.0;
	return HealthComponent->GetHealthPercent();
}

bool UPlayerHUDWidget::GetWeaponUIData(FWeaponUIData& UIData) const
{
	const auto WeaponComponent = ShooterUtils::GetPlayerComponent<UWeaponComponent>(GetOwningPlayerPawn());
	if (!WeaponComponent) return false;
	return WeaponComponent->GetCurrentWeaponUIData(UIData);
}

bool UPlayerHUDWidget::GetAmmoData(FAmmoData& AmmoData) const
{
	
	const auto WeaponComponent = ShooterUtils::GetPlayerComponent<UWeaponComponent>(GetOwningPlayerPawn());
	if (!WeaponComponent) return false;
	return WeaponComponent->GetCurrentWeaponAmmoData(AmmoData);
}

bool UPlayerHUDWidget::IsPlayerAlive() const
{
	const auto HealthComponent = ShooterUtils::GetPlayerComponent<UHealthComponent>(GetOwningPlayerPawn());
	return HealthComponent && !HealthComponent->IsDead();
}

bool UPlayerHUDWidget::IsPlayerSpectating() const
{
	const auto Controller = GetOwningPlayer();
	return Controller && Controller->GetStateName() == NAME_Spectating;
}

