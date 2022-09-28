// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "RifleWeapon.generated.h"

class UWeaponFX;
class UNiagaraComponent;
class UAudioComponent;

UCLASS()
class SHOOTER_API ARifleWeapon : public ABaseWeapon
{
	GENERATED_BODY()


public:

	ARifleWeapon();
	virtual void StartFire() override;
	virtual void StopFire() override;

	virtual void Zoom(bool Enabled) override; 
	
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float FireRate = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float BulletSpread = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float Damage = 10.0f;

	UPROPERTY(VisibleAnywhere, Category = "VFX")
		UWeaponFX* WeaponFXComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float FOVZoomAngle = 50.0f;

	virtual void BeginPlay() override;
	virtual void MakeShot() override;
	virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const override;

private:
	FTimerHandle ShotTimerHandle;

	UPROPERTY()
		UNiagaraComponent* MuzzleFXComponent;

	UPROPERTY()
	UAudioComponent* FireAudioComponent;

	void MakeDamage(const FHitResult& HitResult);
	void InitFX();
	void SetFXActive(bool IsActive);
	AController* GetController() const;

	float DefaultCameraFOV = 90.0f;

};
