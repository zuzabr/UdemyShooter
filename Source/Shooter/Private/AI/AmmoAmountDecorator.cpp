// Shooter Game All the Rights Reserved


#include "AI/AmmoAmountDecorator.h"
#include "AIController.h"
#include "Weapon/WeaponComponent.h"


UAmmoAmountDecorator::UAmmoAmountDecorator()
{
	NodeName = "Need Ammo";
}
bool UAmmoAmountDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (!Controller) return false;
	const auto WeaponComp = Cast<UWeaponComponent>((Controller->GetPawn())->GetComponentByClass(UWeaponComponent::StaticClass()));
	if (!WeaponComp) return false;
	
	return WeaponComp->NeedAmmo(WeaponType);
}
