// Shooter Game All the Rights Reserved


#include "AI/FireService.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Weapon/WeaponComponent.h"

UFireService::UFireService()
{
	NodeName = "Fire";
}

void UFireService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	const auto Controller = OwnerComp.GetAIOwner();
	const auto Blackboard = OwnerComp.GetBlackboardComponent();

	const auto HasAim = Blackboard && Blackboard->GetValueAsObject(EnemyActorKey.SelectedKeyName);

	if (Controller)
	{
		const auto WeaponComp = Cast<UWeaponComponent>((Controller->GetPawn())->GetComponentByClass(UWeaponComponent::StaticClass()));
		if (WeaponComp)
		{
			HasAim ? WeaponComp->StartFire() : WeaponComp->StopFire();
		}
	}

	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
