// Shooter Game All the Rights Reserved


#include "AI/NPCChar.h"
#include "AI/NPCController.h"
#include "Weapon/NPCWeaponComponent.h"
#include "BrainComponent.h"

ANPCChar::ANPCChar(const FObjectInitializer& ObjInit)
	:Super(ObjInit.SetDefaultSubobjectClass<UNPCWeaponComponent>("WeaponComponent"))
{
	AutoPossessAI = EAutoPossessAI::Disabled;
	AIControllerClass = ANPCController::StaticClass();
}

void ANPCChar::OnDeath()
{
	Super::OnDeath();

	const auto ThisController = Cast<AAIController>(Controller);
	if (ThisController && ThisController->BrainComponent)
	{
		ThisController->BrainComponent->Cleanup();
	}
}
