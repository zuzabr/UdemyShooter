// Shooter Game All the Rights Reserved

#pragma once


#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "LauncherWeapon.generated.h"

class ARocketProjectile;
class USoundCue;

UCLASS()
class SHOOTER_API ALauncherWeapon : public ABaseWeapon
{
    GENERATED_BODY()

public:
    virtual void StartFire() override;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
        TSubclassOf<ARocketProjectile> ProjectileClass;

    UPROPERTY(EditdefaultsOnly, BlueprintReadWrite, Category = "Sound")
        USoundCue* NoAmmoSound;

   
    virtual void MakeShot() override;
};