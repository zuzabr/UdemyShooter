// Shooter Game All the Rights Reserved


#include "Weapon/RadialDamageActor.h"
#include "DrawDebughelpers.h"
#include "Kismet/GameplayStatics.h"


ARadialDamageActor::ARadialDamageActor()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);
}


void ARadialDamageActor::BeginPlay()
{
	Super::BeginPlay();
	
}


void ARadialDamageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugSphere(GetWorld(), GetActorLocation(), Radius, 24, SphereColor);
	UGameplayStatics::ApplyRadialDamage(GetWorld(), Damage, GetActorLocation(), Radius, DamageType, {}, this, nullptr, bDoFullDamage);

}

