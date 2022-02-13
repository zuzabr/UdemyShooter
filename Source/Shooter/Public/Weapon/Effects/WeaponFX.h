// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShooterCoreTypes.h"
#include "WeaponFX.generated.h"


class UNiagaraSystem;
class UPhysicalMaterial;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTER_API UWeaponFX : public UActorComponent
{
	GENERATED_BODY()

public:	

	UWeaponFX();
	void PlayImpactFX(const FHitResult& Hit);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
		FImpactlData DefaultImpactData;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
		TMap<UPhysicalMaterial*, FImpactlData> ImpactDataMap;
};
