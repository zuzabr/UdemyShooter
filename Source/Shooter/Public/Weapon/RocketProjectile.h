// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RocketProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class SHOOTER_API ARocketProjectile : public AActor
{
	GENERATED_BODY()
	
public:	

	ARocketProjectile();

	void SetShotDirection(const FVector& Direction) { ShotDirection = Direction; }

protected:

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
		USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
		UProjectileMovementComponent* MovementComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		float DamageRadius = 200.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		float DamageAmount = 40.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		bool bDoFullDamage = false;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		float ProjectileLifeSpan = 5.0f;
	
	virtual void BeginPlay() override;

private:

	FVector ShotDirection;

	UFUNCTION()
		void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit );
	
	AController* GetController() const;

};
