// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Player/DefaultChar.h"
#include "NPCChar.generated.h"

class UBehaviorTree;
class UWidgetComponent;

UCLASS()
class SHOOTER_API ANPCChar : public ADefaultChar
{
	GENERATED_BODY()

public:
	ANPCChar(const FObjectInitializer& ObjInit);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
		UBehaviorTree* BehaviorTreeAsset;

	

protected:
	virtual void OnDeath() override;
	virtual void BeginPlay() override;
	virtual void OnHealthChanged(float Health) override;

	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UWidgetComponent* HealthWidgetComponent;


	
};
