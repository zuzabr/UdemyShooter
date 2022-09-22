// Shooter Game All the Rights Reserved


#include "AI/FindEnemyService.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "AI/NPCPerceptionComponent.h"

UFindEnemyService::UFindEnemyService()
{
	NodeName = "Find Enemy";
}

void UFindEnemyService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	const auto Blackboard = OwnerComp.GetBlackboardComponent();
	if (Blackboard)
	{
		const auto Controller = OwnerComp.GetAIOwner();
		const auto PerceptionComp = Cast<UNPCPerceptionComponent>(Controller->GetComponentByClass(UNPCPerceptionComponent::StaticClass()));
		if (PerceptionComp)
		{
			
			Blackboard->SetValueAsObject(EnemyActorKey.SelectedKeyName, PerceptionComp->GetClosestEnemy());
		}
	}
	Super::TickNode(OwnerComp,NodeMemory, DeltaSeconds);
}
