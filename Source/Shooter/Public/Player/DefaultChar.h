// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DefaultChar.generated.h"


class UHealthComponent;
class UWeaponComponent;


UCLASS()// Создается класс анреала
class SHOOTER_API ADefaultChar : public ACharacter // класс проект_API А - актор  - дочерний по отн ACharacter
{
	GENERATED_BODY()

public:
	ADefaultChar(const FObjectInitializer& ObjectInit);



protected:
	
	virtual void BeginPlay() override;
	virtual void OnDeath();

	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UWeaponComponent* WeaponComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Animations")
		UAnimMontage* DeathAnimMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
		FVector2D LandedDamageVelocity = FVector2D(900.0f, 1200.0f);

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
		FVector2D LandedDamage = FVector2D(10.0f, 100.0f);

	UPROPERTY(EditDefaultsOnly, Category = "Material")
		FName MaterialColorName = "BodyColor";
	

public:	
	
	virtual void Tick(float DeltaTime) override;
	

	UFUNCTION(BlueprintCallable, Category = "Movement")
		virtual bool IsSprinting() const;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		float GetMovementDirection() const;

	UHealthComponent* GetHealth(APawn* PlayerPawn) const;

	void SetPlayerColor(const FLinearColor& Color);

private:



	
	void OnHealthChanged(float Health);
	

	UFUNCTION()
		void OnGroundLanded(const FHitResult& Hit);

	
};
