// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GoToMenuWidget.generated.h"

class UButton;

UCLASS()
class SHOOTER_API UGoToMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

	UPROPERTY(meta = (BindWidget))
		UButton* GoToMenuButton;

private:
	UFUNCTION()
	void OnGoToMenu();
	
};
