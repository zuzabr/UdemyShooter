// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameDataWidget.generated.h"

class AGM_Shooter;
class AShooterPlayerState;

UCLASS()
class SHOOTER_API UGameDataWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UI")
	int32 GetKillsNum() const;

	UFUNCTION(BlueprintCallable, Category = "UI")
	int32 GetCurrentRoundNum() const;

	UFUNCTION(BlueprintCallable, Category = "UI")
	int32 GetTotalRoundsNum() const;

	UFUNCTION(BlueprintCallable, Category = "UI")
	int32 GetRoundSecondsRemain() const;

private:

	AGM_Shooter* GetGameMode() const;
	AShooterPlayerState* GetPlayerState() const;
	
};
