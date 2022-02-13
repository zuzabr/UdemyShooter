// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShooterCoreTypes.h"
#include "HealthComponent.generated.h"


class UCameraShakeBase;
class UAnimMontage;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTER_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UHealthComponent();

	float GetHealth() const
	{
		return Health;
	}

	float GetMaxHealth() const
	{
		return MaxHealth;
	}

	bool ChangeHealth(float HealthChange);
	bool IsHealthFull();

	UFUNCTION(BlueprintCallable, Category = "Health")
		bool IsDead() const
	{
		return FMath::IsNearlyZero(Health);
	}

	UFUNCTION(BlueprintCallable, Category = "Health")
		float GetHealthPercent() const { return Health / MaxHealth; }

	FOnDeath OnDeath; // Создание делегата
	FOnHealthChanged OnHealthChanged;

protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", meta = (ClampMin = "0.0", ClampMax = "1000.0"))
	float MaxHealth = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal")
		bool AutoHeal = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal", meta = (EditCondition = "AutoHeal"))
		float HealUpdateTime = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal", meta = (EditCondition = "AutoHeal"))
		float HealDelay = 3.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal", meta = (EditCondition = "AutoHeal"))
		float HealModifier = 5.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
		TSubclassOf<UCameraShakeBase> CameraShake;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
		UAnimMontage* DamageMontage;

	//UFUNCTION(BlueprintImplementableEvent, Category = "..") Чтобы создать event в blueprint, в cpp добавлять не надо

	virtual void BeginPlay() override;

private:
	float Health = 0.0f;

	FTimerHandle HealTimerHandle;

	UFUNCTION()
		void OnTakeAnyDamageHAndle(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	void HealUpdate();
	void SetHealth(float NewHealth);
	void PlayCameraShake();
};
