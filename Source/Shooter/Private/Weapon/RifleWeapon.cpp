// Shooter Game All the Rights Reserved


#include "Weapon/RifleWeapon.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Weapon/Effects/WeaponFX.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

ARifleWeapon::ARifleWeapon()
{

	WeaponFXComponent = CreateDefaultSubobject<UWeaponFX>("WeaponFXComponent");
}

void ARifleWeapon::BeginPlay()
{
	Super::BeginPlay();
	check(WeaponFXComponent);
}

void ARifleWeapon::StartFire()
{
	InitMuzzleFX();
	GetWorldTimerManager().SetTimer(ShotTimerHandle, this, &ARifleWeapon::MakeShot, FireRate, true);
	MakeShot();
}

void ARifleWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(ShotTimerHandle);
	SetMuzzleFXVisibility(false);
}


void ARifleWeapon::MakeShot()
{
	if (!GetWorld() || IsAmmoEmpty())
	{
		StopFire();
		return;
	}

	FVector TraceStart, TraceEnd;
	if (!GetTraceData(TraceStart, TraceEnd))
	{
		StopFire();
		return;
	}

	FHitResult HitResult;
	MakeHit(HitResult, TraceStart, TraceEnd);
	FVector TraceFXEnd = TraceEnd;

	if (HitResult.bBlockingHit)
	{
		TraceFXEnd = HitResult.ImpactPoint;
		MakeDamage(HitResult);
		WeaponFXComponent->PlayImpactFX(HitResult);
	}
	SpawnTraceFX(GetFireWorldLocation(), TraceEnd);
	DecreaseAmmo();
}

bool ARifleWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
	FVector ViewLocation;
	FRotator ViewRotation;
	if (!GetPlayerViewPoint(ViewLocation, ViewRotation)) return false;

	TraceStart = ViewLocation; // SocketTransform.GetLocation();
	const auto HalfRadius = FMath::DegreesToRadians(BulletSpread);
	const FVector ShootDirection = FMath::VRandCone(ViewRotation.Vector(), HalfRadius); //SocketTransform.GetRotation().GetForwardVector();
	TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;

	return true;
}
void ARifleWeapon::MakeDamage(const FHitResult& HitResult)
{
	const auto DamagedActor = HitResult.GetActor();
	if (!DamagedActor) return;

	DamagedActor->TakeDamage(Damage, FDamageEvent(), GetController(), this);
}

void ARifleWeapon::InitMuzzleFX()
{
	if (!MuzzleFXComponent)
	{
		MuzzleFXComponent = SpawnMuzzleFX();
	}
	SetMuzzleFXVisibility(true);
}

void ARifleWeapon::SetMuzzleFXVisibility(bool Visible)
{
	if (MuzzleFXComponent)
	{
		MuzzleFXComponent->SetPaused(!Visible);
		MuzzleFXComponent->SetVisibility(Visible, true);
	}
}

AController* ARifleWeapon::GetController() const
{
	const auto Pawn = Cast<APawn>(GetOwner());
	return Pawn ? Pawn->GetController() : nullptr;
}

void ARifleWeapon::SpawnTraceFX(const FVector& TraceStart, const FVector& TraceEnd)
{
	const auto TraceFXComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), TraceFX, TraceStart);
	if (TraceFXComponent)
	{
		TraceFXComponent->SetNiagaraVariableVec3(TraceTargetName, TraceEnd);
	}
}