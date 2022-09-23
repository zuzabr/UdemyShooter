// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_CanPickUp.generated.h"


UCLASS()
class SHOOTER_API UEnvQueryTest_CanPickUp : public UEnvQueryTest
{
	GENERATED_BODY()
	
public:
	UEnvQueryTest_CanPickUp(const FObjectInitializer& ObjectInitializer);
	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;
};
