// Shooter Game All the Rights Reserved


#include "Player/HealthComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Camera/CameraShakeBase.h"
#include "GameFramework/Character.h"
#include "Animation/AnimMontage.h"


DEFINE_LOG_CATEGORY_STATIC(HealthComponent, All, All);

UHealthComponent::UHealthComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;

}


void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	SetHealth(MaxHealth);
	

	AActor* ComponentOwner = GetOwner();
	if (ComponentOwner)
	{
		ComponentOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::OnTakeAnyDamageHAndle);
	}
}

void UHealthComponent::OnTakeAnyDamageHAndle(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	
	if (Damage <= 0.0f || IsDead() || !GetWorld()) return;
	//SetHealth(Health - Damage);
	ChangeHealth(-Damage);

	GetWorld()->GetTimerManager().ClearTimer(HealTimerHandle);

	if (IsDead())
	{
		OnDeath.Broadcast();
	}
	else if (AutoHeal)
	{
		GetWorld()->GetTimerManager().SetTimer(HealTimerHandle, this, &UHealthComponent::HealUpdate, HealUpdateTime, true, HealDelay);
	}
	
	PlayCameraShake();

	/*auto Character = Cast<ACharacter>(DamagedActor);
	if (Character)
	{
		Character->PlayAnimMontage(DamageMontage);
	}*/
}

void UHealthComponent::HealUpdate()
{
	SetHealth(Health+HealModifier);
	

	if (IsHealthFull() && GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(HealTimerHandle);
	}
}

void UHealthComponent::SetHealth(float NewHealth)
{
	Health = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
	OnHealthChanged.Broadcast(Health);
}

bool UHealthComponent::ChangeHealth(float HealthChange)
{
	if (IsDead()) return false;

	if (HealthChange > 0 && IsHealthFull())
	{
		return false;
	}
	else if (HealthChange > 0 && Health < MaxHealth)
	{
			Health = FMath::Clamp(Health + HealthChange, 0.0f, MaxHealth);
			OnHealthChanged.Broadcast(Health);
			return true;
	}
	
	else if (HealthChange<0)
	{
		Health = FMath::Clamp(Health + HealthChange, 0.0f, MaxHealth);
		OnHealthChanged.Broadcast(Health);
		return true;
	}
	return false;

}

bool UHealthComponent::IsHealthFull()
{
	return FMath::IsNearlyEqual(Health, MaxHealth);
		
}

void UHealthComponent::PlayCameraShake()
{
	if (IsDead()) return;

	const auto Player = Cast<APawn>(GetOwner());
	if (!Player) return;
	const auto Controller = Player->GetController<APlayerController>();
	if (!Controller || !Controller->PlayerCameraManager) return;

	Controller->PlayerCameraManager->StartCameraShake(CameraShake);
}