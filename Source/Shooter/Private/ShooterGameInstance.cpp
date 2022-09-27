// Shooter Game All the Rights Reserved


#include "ShooterGameInstance.h"
#include "Sound/SoundFuncLib.h"

void UShooterGameInstance::ToggleVolume()
{
	USoundFuncLib::ToggleSoundClassVolume(MasterSoundClass);
}