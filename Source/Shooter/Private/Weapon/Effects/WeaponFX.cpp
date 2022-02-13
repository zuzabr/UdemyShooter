// Shooter Game All the Rights Reserved


#include "Weapon/Effects/WeaponFX.h"
#include "NiagaraFunctionLibrary.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Kismet/GameplayStatics.h"
#include "Components/DecalComponent.h"



UWeaponFX::UWeaponFX()
{
	
	PrimaryComponentTick.bCanEverTick = false;
	
}

void UWeaponFX::PlayImpactFX(const FHitResult& Hit)
{
	
	auto ImpactData = DefaultImpactData;

	if (Hit.PhysMaterial.IsValid())
	{
		const auto PhysMat = Hit.PhysMaterial.Get();
		if (ImpactDataMap.Contains(PhysMat))
		{
			ImpactData = ImpactDataMap[PhysMat];
		}
	}
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactData.NiagaraEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());

	//---------------------DecalSpawn---------------------
	auto DecalComponent = UGameplayStatics::SpawnDecalAtLocation
	(GetWorld(),
	ImpactData.DecalData.Material,
	ImpactData.DecalData.Size,
	Hit.ImpactPoint,
	Hit.ImpactNormal.Rotation());
	//---------------------DecalSpawn---------------------
	if (DecalComponent)
	{
		DecalComponent->SetFadeOut(ImpactData.DecalData.LifeTime, ImpactData.DecalData.FadeOutTime);
	}
}



