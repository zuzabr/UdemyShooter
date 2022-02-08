// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CMC_Shooter.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UCMC_Shooter : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, CAtegory = "Movement", meta = (ClampMin = "1.5", ClampMax = "10.0"))
		float RunModifier = 2.0f;

	virtual float GetMaxSpeed() const override;
	
};
