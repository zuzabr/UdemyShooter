// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShooterCoreTypes.h"
#include "GameOverWidget.generated.h"

class UVerticalBox;
class UButton;

UCLASS()
class SHOOTER_API UGameOverWidget : public UUserWidget
{
	GENERATED_BODY()



protected:
	UPROPERTY(meta = (BindWidget))
		UVerticalBox* PlayerStatBox;

	UPROPERTY(meta = (BindWidget))
		UButton* RestartLevelButton;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
		TSubclassOf<UUserWidget> PlayerStatWidgetClass;

	virtual void NativeOnInitialized() override;

private:
	void OnMatchStateChanged(EMatchState State);
	void UpdatePlayerStat();

	UFUNCTION()
		void OnRestartLevel();
	
};
