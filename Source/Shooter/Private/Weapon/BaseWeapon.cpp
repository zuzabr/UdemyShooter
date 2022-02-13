// Shooter Game All the Rights Reserved


#include "Weapon/BaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseWeapon, All, All);

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
    SetRootComponent(WeaponMesh);
}

void ABaseWeapon::BeginPlay()
{
    Super::BeginPlay();

    check(WeaponMesh);
    checkf(DefaultAmmo.Bullets > 0, TEXT("Bullets count couldn't be less or equal zero"));
    checkf(DefaultAmmo.Clips > 0, TEXT("Clips count couldn't be less or equal zero"));
    CurrentAmmo = DefaultAmmo;
}

void ABaseWeapon::StartFire()
{
    FireInProgress = true;
}

void ABaseWeapon::StopFire()
{
    FireInProgress = false;
}

bool ABaseWeapon::IsFiring() const
{
    return FireInProgress;
}

void ABaseWeapon::MakeShot() {}

bool ABaseWeapon::GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const
{
    const auto STUCharacter = Cast<ACharacter>(GetOwner());
    if (!STUCharacter) return false;

    if (STUCharacter->IsPlayerControlled())
    {
        const auto Controller = STUCharacter->GetController<APlayerController>();
        if (!Controller) return false;

        Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);
    }
    else
    {
        ViewLocation = GetFireWorldLocation();
        ViewRotation = WeaponMesh->GetSocketRotation(FireSocketName);
    }

    return true;
}

FVector ABaseWeapon::GetFireWorldLocation() const
{
    return WeaponMesh->GetSocketLocation(FireSocketName);
}

bool ABaseWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
    FVector ViewLocation;
    FRotator ViewRotation;
    if (!GetPlayerViewPoint(ViewLocation, ViewRotation)) return false;

    TraceStart = ViewLocation;
    const FVector ShootDirection = ViewRotation.Vector();
    TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;
    return true;
}

void ABaseWeapon::MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd)
{
    if (!GetWorld()) return;

    FCollisionQueryParams CollisionParams;
    CollisionParams.bReturnPhysicalMaterial = true;
    CollisionParams.AddIgnoredActor(GetOwner());

    GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECollisionChannel::ECC_Visibility, CollisionParams);
}

void ABaseWeapon::DecreaseAmmo()
{
    if (CurrentAmmo.Bullets == 0)
    {
        UE_LOG(LogBaseWeapon, Warning, TEXT("Clip is empty"));
        return;
    }
    CurrentAmmo.Bullets--;

    if (IsClipEmpty() && !IsAmmoEmpty())
    {
        StopFire();
        OnClipEmpty.Broadcast(this);
    }
}

bool ABaseWeapon::IsAmmoEmpty() const
{
    return !CurrentAmmo.bInfinite && CurrentAmmo.Clips == 0 && IsClipEmpty();
}

bool ABaseWeapon::IsClipEmpty() const
{
    return CurrentAmmo.Bullets == 0;
}

void ABaseWeapon::ChangeClip()
{
    if (!CurrentAmmo.bInfinite)
    {
        if (CurrentAmmo.Clips == 0)
        {
            UE_LOG(LogBaseWeapon, Warning, TEXT("No more clips"));
            return;
        }
        CurrentAmmo.Clips--;
    }
    CurrentAmmo.Bullets = DefaultAmmo.Bullets;
    // UE_LOG(LogBaseWeapon, Display, TEXT("------ Change Clip ------"));
}

bool ABaseWeapon::CanReload() const
{
    return CurrentAmmo.Bullets < DefaultAmmo.Bullets&& CurrentAmmo.Clips > 0;
}

void ABaseWeapon::LogAmmo()
{
    FString AmmoInfo = "Ammo: " + FString::FromInt(CurrentAmmo.Bullets) + " / ";
    AmmoInfo += CurrentAmmo.bInfinite ? "Infinite" : FString::FromInt(CurrentAmmo.Clips);
    UE_LOG(LogBaseWeapon, Display, TEXT("%s"), *AmmoInfo);
}

bool ABaseWeapon::IsAmmoFull() const
{
    return CurrentAmmo.Clips == DefaultAmmo.Clips &&  //
        CurrentAmmo.Bullets == DefaultAmmo.Bullets;
}

bool ABaseWeapon::TryToAddAmmo(int32 ClipsAmount)
{
    if (CurrentAmmo.bInfinite || IsAmmoFull() || ClipsAmount <= 0) return false;

    if (IsAmmoEmpty())
    {
        CurrentAmmo.Clips = FMath::Clamp(ClipsAmount, 0, DefaultAmmo.Clips + 1);
        OnClipEmpty.Broadcast(this);
    }
    else if (CurrentAmmo.Clips < DefaultAmmo.Clips)
    {
        const auto NextClipsAmount = CurrentAmmo.Clips + ClipsAmount;
        if (DefaultAmmo.Clips - NextClipsAmount >= 0)
        {
            CurrentAmmo.Clips = NextClipsAmount;
        }
        else
        {
            CurrentAmmo.Clips = DefaultAmmo.Clips;
            CurrentAmmo.Bullets = DefaultAmmo.Bullets;
        }
    }
    else
    {
        CurrentAmmo.Bullets = DefaultAmmo.Bullets;
    }

    return true;
}

UNiagaraComponent* ABaseWeapon::SpawnMuzzleFX()
{
    return UNiagaraFunctionLibrary::SpawnSystemAttached(MuzzleFX,  //
        WeaponMesh,                                                //
        FireSocketName,                                            //
        FVector::ZeroVector,                                       //
        FRotator::ZeroRotator,                                     //
        EAttachLocation::SnapToTarget, true);
}

