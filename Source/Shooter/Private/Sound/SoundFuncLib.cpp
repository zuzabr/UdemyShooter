// Shooter Game All the Rights Reserved


#include "Sound/SoundFuncLib.h"
#include "Sound/SoundClass.h"

void USoundFuncLib::SetSoundClassVolume(USoundClass* SoundClass, float Volume)
{
	if (!SoundClass) return;
	SoundClass->Properties.Volume = FMath::Clamp(Volume,0.0f,1.0f);
}


void USoundFuncLib::ToggleSoundClassVolume(USoundClass* SoundClass)
{
	if (!SoundClass) return;

	const auto NextVolume = SoundClass->Properties.Volume > 0.0f ? 0.0f : 1.0f;
	SetSoundClassVolume(SoundClass, NextVolume);
}