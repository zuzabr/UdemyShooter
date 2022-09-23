// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "AmmoAmountDecorator.generated.h"

class ABaseWeapon;

UCLASS()
class SHOOTER_API UAmmoAmountDecorator : public UBTDecorator
{
	GENERATED_BODY()

public:
	UAmmoAmountDecorator();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		TSubclassOf< ABaseWeapon> WeaponType;
	
};
