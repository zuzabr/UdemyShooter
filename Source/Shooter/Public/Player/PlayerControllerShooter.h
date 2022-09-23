// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerShooter.generated.h"

class URespawnComponent;

UCLASS()
class SHOOTER_API APlayerControllerShooter : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerControllerShooter();

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		URespawnComponent* RespawnComponent;
	
};
