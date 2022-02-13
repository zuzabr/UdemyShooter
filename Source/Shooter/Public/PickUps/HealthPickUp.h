// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "PickUps/BasePickUp.h"
#include "HealthPickUp.generated.h"


UCLASS()
class SHOOTER_API AHealthPickUp : public ABasePickUp
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickupInfo", meta = (ClampMin = "1.0", ClampMax = "1000.0"))
		float HealthAmount = 100.0f;

private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
	
};
