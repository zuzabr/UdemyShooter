// Shooter Game All the Rights Reserved


#include "Player/PlayerControllerShooter.h"
#include "Player/RespawnComponent.h"

APlayerControllerShooter::APlayerControllerShooter()
{
	RespawnComponent = CreateDefaultSubobject<URespawnComponent>("RespawnComponent");
}