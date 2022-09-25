// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatisticWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS()
class SHOOTER_API UStatisticWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetPlayerName(const FText& Text);
	void SetKillsText(const FText& Text);
	void SetDeathsText(const FText& Text);
	void SetTeamText(const FText& Text);
	void SetPlayerImageVisibility(bool Visible);

protected:
	UPROPERTY(meta = (BindWidget))
		UTextBlock* PlayerNameText;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* KillsText;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* DeathsText;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* TeamText;

	UPROPERTY(meta = (BindWidget))
		UImage* PlayerImage;
	
};
