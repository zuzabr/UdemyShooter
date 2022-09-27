// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShooterCoreTypes.h"
#include "MenuWidget.generated.h"

class UButton;
class UHorizontalBox;
class UShooterGameInstance;
class ULvlItemWidget;

UCLASS()
class SHOOTER_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

	UPROPERTY(meta = (BindWidget))
		UButton* StartGameButton;

	UPROPERTY(meta = (BindWidget))
		UButton* QuitGameButton;

	UPROPERTY(meta = (BindWidget))
		UHorizontalBox* LvlItemsBox;

	UPROPERTY(EditdefaultsOnly, BlueprintReadWrite, Category = "UI")
		TSubclassOf<UUserWidget> LvlItemWidgetClass;

	
	
private:

	UPROPERTY()
		TArray<ULvlItemWidget*> LvlItemWidgets;

	UFUNCTION()
		void OnStartGame();

	UFUNCTION()
		void OnQuitGame();

	void InitLvlItems();
	void OnLvlSelected(const FLevelData& Data);
	UShooterGameInstance* GetShooterGameInstance() const;

};
