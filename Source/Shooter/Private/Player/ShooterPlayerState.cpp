// Shooter Game All the Rights Reserved


#include "Player/ShooterPlayerState.h"

void AShooterPlayerState::LogInfo()
{
	UE_LOG(LogTemp, Display, TEXT("TeamID: %i, Kills: %i, Deaths: %i"), TeamID, KillsNum, DeathsNum);
}


