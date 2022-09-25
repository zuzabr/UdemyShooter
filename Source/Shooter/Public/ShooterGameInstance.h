// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ShooterCoreTypes.h"
#include "ShooterGameInstance.generated.h"


UCLASS()
class SHOOTER_API UShooterGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	FLevelData GetStartupLvl() const { return StartupLvl; }
	void SetStartupLvl(const FLevelData& Data)  { StartupLvl = Data; }

	TArray<FLevelData> GetLevelsData() const {return  LevelsData;}
	FName GetMenuLvlName() const { return MenuLvlName; }
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game", meta = (ToolTip = "Levels names must be unique"))
		TArray<FLevelData> LevelsData;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game")
		FName MenuLvlName = NAME_None;

private:
	FLevelData StartupLvl;
};
