// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShooterCoreTypes.h"
#include "LvlItemWidget.generated.h"

class UButton;
class UTextBlock;
class UImage;

UCLASS()
class SHOOTER_API ULvlItemWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	FOnLvlSelectedSignature OnLvlSelected;

	void SetLvlData(const FLevelData& Data);
	FLevelData GetLvlData() const { return LvlData; }

	void SetSelected(bool IsSelected);

protected:

	UPROPERTY(meta = (BindWidget))
		UButton* LvlSelectButton;
	
	UPROPERTY(meta = (BindWidget))
		UTextBlock* LvlNameTextBlock;

	UPROPERTY(meta = (BindWidget))
		UImage* LvlImage = nullptr;

	UPROPERTY(meta = (BindWidget))
		UImage* FrameImage;

	virtual void NativeOnInitialized() override;

private:
	FLevelData LvlData;

	UFUNCTION()
		void OnLvlItemClicked();

};
