// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "PickUps/BasePickUp.h"
#include "AmmoPickUp.generated.h"

class ABaseWeapon;

UCLASS()
class SHOOTER_API AAmmoPickUp : public ABasePickUp
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickupInfo", meta = (ClampMin = "1.0", ClampMax = "100.0"))
		int32 ClipsAmount = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickupInfo")
		TSubclassOf<ABaseWeapon> WeaponType;

private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
};
