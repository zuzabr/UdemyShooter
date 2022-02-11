// Shooter Game All the Rights Reserved


#include "Weapon/BaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(BaseWeaponLog, All, All);

//Construction
ABaseWeapon::ABaseWeapon()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	SetRootComponent(WeaponMesh);
}

//BeginPlay
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	checkf(DefaultAmmo.Bullets > 0, TEXT("Bullets count couldn't be less or equal zero"));
	checkf(DefaultAmmo.Clips > 0, TEXT("Clips count couldn't be less or equal zero"));
	check(WeaponMesh);

	CurrentAmmo = DefaultAmmo;
	
}

//Virtual functions
void ABaseWeapon::StartFire(){}
void ABaseWeapon::StopFire(){}
void ABaseWeapon::MakeShot(){}

//GetPlayerController
APlayerController* ABaseWeapon::GetPlayerController() const
{
	const auto Player = Cast<ACharacter>(GetOwner());
	if (!Player) return nullptr;

	return Player->GetController<APlayerController>();
	
}

//GetPlayerViewPoint
bool ABaseWeapon::GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const
{
	const auto Controller = GetPlayerController();
	if (!Controller) return false;

	Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
	return true;
}

//GetFireWorldLocation
FVector ABaseWeapon::GetFireWorldLocation() const
{
	return WeaponMesh->GetSocketLocation(FireSocketName);
}

//GetTraceData
bool ABaseWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
	FVector ViewLocation;
	FRotator ViewRotation;
	if (!GetPlayerViewPoint(ViewLocation, ViewRotation)) return false;

	TraceStart = ViewLocation; // SocketTransform.GetLocation();
	const FVector ShootDirection = ViewRotation.Vector(); //SocketTransform.GetRotation().GetForwardVector();
	TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;

	return true;
}

//MakeHit
void ABaseWeapon::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd)
{
	if (!GetWorld()) return;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetOwner());
	GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECollisionChannel::ECC_Visibility, CollisionParams);
}

//DecreaseAmmo
void ABaseWeapon::DecreaseAmmo()
{
	if (CurrentAmmo.Bullets == 0)
	{
		UE_LOG(BaseWeaponLog, Warning, TEXT("Clip is empty"));
		return;
	}
	
	CurrentAmmo.Bullets--;
	LogAmmo();

	if (IsClipEmpty() && !IsAmmoEmpty())
	{
		StopFire();
		OnClipEmpty.Broadcast();
	}
}

//IsAmmoEmpty
bool ABaseWeapon::IsAmmoEmpty() const
{
	return !CurrentAmmo.bInfinite && CurrentAmmo.Clips <= 0 && IsClipEmpty();
}

//IsClipEmpty
bool ABaseWeapon::IsClipEmpty() const
{
	return CurrentAmmo.Bullets <= 0;
}

//ChangeClip
void ABaseWeapon::ChangeClip()
{
	
	if (!CurrentAmmo.bInfinite)
	{
		if (CurrentAmmo.Clips == 0)
		{
			UE_LOG(BaseWeaponLog, Warning, TEXT("No more clips"));
			return;
		}
		CurrentAmmo.Clips--;
	}
	CurrentAmmo.Bullets = DefaultAmmo.Bullets;
	UE_LOG(BaseWeaponLog, Display, TEXT("-------------Change clip-------------"));
}

//CanReload
bool ABaseWeapon::CanReload() const
{
	return CurrentAmmo.Bullets < DefaultAmmo.Bullets&& CurrentAmmo.Clips > 0;

}

//LogAmmo
void ABaseWeapon::LogAmmo()
{
	FString AmmoInfo = "Ammo: " + FString::FromInt(CurrentAmmo.Bullets) + " / ";
	AmmoInfo += CurrentAmmo.bInfinite ? "Infinite" : FString::FromInt(CurrentAmmo.Clips);
	UE_LOG(BaseWeaponLog, Display, TEXT("%s"), *AmmoInfo);
}