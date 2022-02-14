// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "RifleWeapon.generated.h"

class UWeaponFX;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS()
class SHOOTER_API ARifleWeapon : public ABaseWeapon
{
	GENERATED_BODY()


public:

	ARifleWeapon();
	virtual void StartFire() override;
	virtual void StopFire() override;
	
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float FireRate = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float BulletSpread = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WeaponInfo")
		float Damage = 10.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
		UNiagaraSystem* TraceFX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
		FString TraceTargetName = "TraceTarget";

	UPROPERTY(VisibleAnywhere, Category = "VFX")
		UWeaponFX* WeaponFXComponent;

	virtual void BeginPlay() override;
	virtual void MakeShot() override;
	virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const override;

private:
	FTimerHandle ShotTimerHandle;

	UPROPERTY()
		UNiagaraComponent* MuzzleFXComponent;

	void MakeDamage(const FHitResult& HitResult);
	void InitMuzzleFX();
	void SetMuzzleFXVisibility(bool Visible);
	AController* GetController() const;
	void SpawnTraceFX(const FVector& TraceStart, const FVector& TraceEnd);

};
