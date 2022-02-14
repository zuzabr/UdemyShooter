// Shooter Game All the Rights Reserved


#include "Weapon/RocketProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Weapon/Effects/WeaponFX.h"

ARocketProjectile::ARocketProjectile()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	CollisionComponent->InitSphereRadius(5.0f);
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	CollisionComponent->bReturnMaterialOnMove = true;
	SetRootComponent(CollisionComponent);

	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComp");
	MovementComponent->InitialSpeed = 1500.0f;

	WeaponFXComponent = CreateDefaultSubobject<UWeaponFX>("WeaponFXComponent");
}

void ARocketProjectile::BeginPlay()
{
	Super::BeginPlay();

	check(MovementComponent);
	check(CollisionComponent);
	check(WeaponFXComponent);
	MovementComponent->Velocity = ShotDirection * MovementComponent->InitialSpeed;
	CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);
	CollisionComponent->OnComponentHit.AddDynamic(this, &ARocketProjectile::OnProjectileHit);
	SetLifeSpan(ProjectileLifeSpan);
}

void ARocketProjectile::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!GetWorld()) return;
	MovementComponent->StopMovementImmediately();

	// Make Damage
	UGameplayStatics::ApplyRadialDamage(GetWorld(),
		DamageAmount,
		GetActorLocation(),
		DamageRadius,
		UDamageType::StaticClass(),
		{},
		this,
		GetController(),
		bDoFullDamage);

	//DrawDebugSphere(GetWorld(), GetActorLocation(), DamageRadius, 24, FColor::Red, false, 5.0f);
	WeaponFXComponent->PlayImpactFX(Hit);
	Destroy();
}

AController* ARocketProjectile::GetController() const
{
	const auto Pawn = Cast<APawn>(GetOwner());
	return Pawn ? Pawn->GetController() : nullptr;
}