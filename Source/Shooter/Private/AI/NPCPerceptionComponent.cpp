// Shooter Game All the Rights Reserved


#include "AI/NPCPerceptionComponent.h"
#include "AI/NPCController.h"
#include "Player/HealthComponent.h"
#include"Perception/AISense_Sight.h"
#include"Perception/AISense_Damage.h"
#include "Player/DefaultChar.h"
#include "ShooterUtils.h"


AActor* UNPCPerceptionComponent::GetClosestEnemy() const
{
	TArray<AActor*> PercieveActors;
	GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), PercieveActors);
	if (PercieveActors.Num() == 0)
	{
		GetCurrentlyPerceivedActors(UAISense_Damage::StaticClass(), PercieveActors);
		if (PercieveActors.Num() == 0) return nullptr;
	}
		
	const auto Controller = Cast<AAIController>(GetOwner());
	if (!Controller) return nullptr;

	
	const auto ThisPawn = Cast<ADefaultChar>(Controller->GetPawn());
	if (!ThisPawn) return nullptr;

	 

	float BestDistanse = MAX_FLT;
	AActor* BestPawn = nullptr;

	for (const auto  PercieveActor : PercieveActors)
	{
		
		const auto HealthComponent = ShooterUtils::GetPlayerComponent<UHealthComponent>(PercieveActor);
		const auto PercievePawn = Cast<APawn>(PercieveActor);
		const auto AreEnemies = PercievePawn && ShooterUtils::AreEnemies(Controller, PercievePawn->Controller);

			if (HealthComponent && !(HealthComponent->IsDead()) && AreEnemies)
			{
				
				const auto CurrentDistanse = (PercieveActor->GetActorLocation() - ThisPawn->GetActorLocation()).Size();
				if (CurrentDistanse < BestDistanse)
				{
					BestDistanse = CurrentDistanse;
					BestPawn = PercieveActor;
					
				}
			}
		
	}

	return BestPawn;
}
