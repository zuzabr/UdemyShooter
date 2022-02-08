// Shooter Game All the Rights Reserved


#include "Player/CMC_Shooter.h"
#include "Player/DefaultChar.h"

float UCMC_Shooter::GetMaxSpeed() const
{
	const float MaxSpeed = Super::GetMaxSpeed();
	const ADefaultChar* Player = Cast<ADefaultChar>(GetPawnOwner());
	return Player && Player->IsSprinting()? MaxSpeed*RunModifier: MaxSpeed;

}