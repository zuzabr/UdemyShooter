// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SpectatorWidget.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USpectatorWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "UI")
		bool GetRespawnTime(int32& CountDownTime) const;
	
};
