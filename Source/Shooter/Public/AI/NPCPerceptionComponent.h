// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "NPCPerceptionComponent.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UNPCPerceptionComponent : public UAIPerceptionComponent
{
	GENERATED_BODY()
public:

	AActor* GetClosestEnemy() const;
	
};
