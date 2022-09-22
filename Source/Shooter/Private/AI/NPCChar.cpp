// Shooter Game All the Rights Reserved


#include "AI/NPCChar.h"
#include "AI/NPCController.h"

ANPCChar::ANPCChar(const FObjectInitializer& ObjInit) :Super(ObjInit)
{
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = ANPCController::StaticClass();
}