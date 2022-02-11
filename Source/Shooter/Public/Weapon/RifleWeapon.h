// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "RifleWeapon.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API ARifleWeapon : public ABaseWeapon
{
	GENERATED_BODY()


public:

	virtual void StartFire() override;
	virtual void StopFire() override;
	
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float FireRate = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float BulletSpread = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float Damage = 10.0f;

	virtual void MakeShot() override;
	virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const override;

private:
	FTimerHandle ShotTimerHandle;
	void MakeDamage(const FHitResult& HitResult);
};
