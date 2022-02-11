// Shooter Game All the Rights Reserved


#include "Weapon/Animations/DefaultAnimNotify.h"

void UDefaultAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	OnNotified.Broadcast(MeshComp);
	Super::Notify(MeshComp, Animation);
}