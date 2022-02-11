// Shooter Game All the Rights Reserved


#include "Weapon/LauncherWeapon.h"
#include "Weapon/RocketProjectile.h"


void ALauncherWeapon::StartFire()
{
	MakeShot();
}

void ALauncherWeapon::MakeShot()
{
	
	if (!GetWorld() || IsAmmoEmpty()) return;

	FVector TraceStart, TraceEnd;
	if (!GetTraceData(TraceStart, TraceEnd)) return;

	FHitResult HitResult;
	MakeHit(HitResult, TraceStart, TraceEnd);

	const FVector EndPoint = HitResult.bBlockingHit ? HitResult.ImpactPoint : TraceEnd;
	const FVector Direction = (EndPoint - GetFireWorldLocation()).GetSafeNormal();

	const FTransform SpawnTransform(FRotator::ZeroRotator, GetFireWorldLocation());
	ARocketProjectile* Projectile = GetWorld()->SpawnActorDeferred<ARocketProjectile>(ProjectileClass, SpawnTransform);
	if (Projectile)
	{
		Projectile->SetShotDirection(Direction);
		Projectile->SetOwner(GetOwner());
		Projectile->FinishSpawning(SpawnTransform);
	}
	
	DecreaseAmmo();
}