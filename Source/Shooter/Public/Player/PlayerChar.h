// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Player/DefaultChar.h"
#include "PlayerChar.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USphereComponent;

UCLASS()
class SHOOTER_API APlayerChar : public ADefaultChar
{
	GENERATED_BODY()

public:
	APlayerChar(const FObjectInitializer& ObjectInit);
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		USphereComponent* CameraCollisionComponent;

	virtual void OnDeath() override;
	virtual void BeginPlay() override;

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual bool IsSprinting() const override;

private:
	bool bRun = false;
	bool bMoveForward = false;

	void MoveForward(float Scale);
	void MoveRight(float Scale);

	void SprintOn();
	void SprintOff();

	
	UFUNCTION()
		void OnCameraCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnCameraCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void CheckCameraOverlap();

};
