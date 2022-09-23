// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePickUp.generated.h"

class USphereComponent;

UCLASS()
class SHOOTER_API ABasePickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ABasePickUp();
	virtual void Tick(float DeltaTime) override;
	bool CouldBeTaken() const;

protected:

//------------------------Variables------------------------	
	UPROPERTY(VisibleAnywhere, Category = "PickupInfo")
		USphereComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PickupInfo")
		float RespawnTime = 5.0f;

	
//------------------------Variables------------------------	


//------------------------Functions------------------------	
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
//------------------------Functions------------------------	

private:

//------------------------Variables------------------------	
	float RotationYaw = 0.0f;
	FTimerHandle RespawnTimerHandle;
//------------------------Variables------------------------	


//------------------------Functions------------------------
	virtual bool GivePickupTo(APawn* PlayerPawn);
	void PickUpWasTaken();
	void Respawn();
	void GenerateRotationYaw();
//------------------------Functions------------------------
	

};
