// Shooter Game All the Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponComponent.h"
#include "NPCWeaponComponent.generated.h"


UCLASS()
class SHOOTER_API UNPCWeaponComponent : public UWeaponComponent
{
	GENERATED_BODY()

public:
	virtual void StartFire() override;
	virtual void NextWeapon() override;
	
};
