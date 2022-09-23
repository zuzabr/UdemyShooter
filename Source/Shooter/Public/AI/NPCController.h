// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPCController.generated.h"


class UNPCPerceptionComponent;
class URespawnComponent;

UCLASS()
class SHOOTER_API ANPCController : public AAIController
{
	GENERATED_BODY()

public:
	ANPCController();

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UNPCPerceptionComponent* NPCPerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		URespawnComponent* RespawnComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		FName FocusOnKeyName = "EnemyActor";

private:
	AActor* GetFocusOnActor() const;
	
};
