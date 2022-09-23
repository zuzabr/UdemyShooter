// Shooter Game All the Rights Reserved


#include "AI/ChangeWeaponService.h"
#include "Weapon/WeaponComponent.h"
#include "AI/NPCController.h"

UChangeWeaponService::UChangeWeaponService()
{
	NodeName = "Change Weapon";
}

void UChangeWeaponService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (Controller)
	{
		const auto WeaponComp = Cast<UWeaponComponent>((Controller->GetPawn())->GetComponentByClass(UWeaponComponent::StaticClass()));
		if (WeaponComp && Probability>0 && FMath::FRand() <= Probability)
		{
			WeaponComp->NextWeapon();
		}
	}
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}