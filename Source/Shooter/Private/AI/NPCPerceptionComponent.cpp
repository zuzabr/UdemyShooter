// Shooter Game All the Rights Reserved


#include "AI/NPCPerceptionComponent.h"
#include "AI/NPCController.h"
#include "Player/HealthComponent.h"
#include"Perception/AISense_Sight.h"
#include "Player/DefaultChar.h"

AActor* UNPCPerceptionComponent::GetClosestEnemy() const
{
	TArray<AActor*> PercieveActors;
	GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), PercieveActors);
	if (PercieveActors.Num() == 0) return nullptr;

	const auto Controller = Cast<AAIController>(GetOwner());
	if (!Controller) return nullptr;

	
	const auto ThisPawn = Cast<ADefaultChar>(Controller->GetPawn());
	if (!ThisPawn) return nullptr;

	 

	float BestDistanse = MAX_FLT;
	AActor* BestPawn = nullptr;

	for (const auto  PercieveActor : PercieveActors)
	{
		const auto Enemy = Cast<ADefaultChar>(PercieveActor);
		if (Enemy)
		{
			
			const auto HealthComponent = Enemy->GetHealth(Enemy);
			if (HealthComponent && !(HealthComponent->IsDead()))
			{
				
				const auto CurrentDistanse = (PercieveActor->GetActorLocation() - ThisPawn->GetActorLocation()).Size();
				if (CurrentDistanse < BestDistanse)
				{
					BestDistanse = CurrentDistanse;
					BestPawn = PercieveActor;
					
				}
			}
		}
	}

	return BestPawn;
}
