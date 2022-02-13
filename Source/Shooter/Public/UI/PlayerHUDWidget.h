// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShooterCoreTypes.h"
#include "PlayerHUDWidget.generated.h"



UCLASS()
class SHOOTER_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:

//-----------------------Variables-----------------------
	UFUNCTION(BlueprintCallable, Category = "UI")
		float GetHealthPercent() const;

	UFUNCTION(BlueprintCallable, Category = "UI")
		bool GetWeaponUIData(FWeaponUIData& UIData) const;

	UFUNCTION(BlueprintCallable, Category = "UI")
		bool GetAmmoData(FAmmoData& AmmoData) const;

	UFUNCTION(BlueprintCallable, Category = "UI")
		bool IsPlayerAlive() const;

	UFUNCTION(BlueprintCallable, Category = "UI")
		bool IsPlayerSpectating() const;
//-----------------------Variables-----------------------	

private:

//-----------------------Functions-----------------------
	
//-----------------------Functions-----------------------
};
