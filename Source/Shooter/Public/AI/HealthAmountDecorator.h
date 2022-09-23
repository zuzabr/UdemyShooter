// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "HealthAmountDecorator.generated.h"


UCLASS()
class SHOOTER_API UHealthAmountDecorator : public UBTDecorator
{
	GENERATED_BODY()

public:
	UHealthAmountDecorator();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float HealthPercent = 0.6f;
};
