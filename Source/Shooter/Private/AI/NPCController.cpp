// Shooter Game All the Rights Reserved


#include "AI/NPCController.h"
#include "AI/NPCChar.h"
#include "AI/NPCPerceptionComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ANPCController::ANPCController()
{
	NPCPerceptionComponent = CreateDefaultSubobject<UNPCPerceptionComponent>("NPCPerceptionComponent");
	SetPerceptionComponent(*NPCPerceptionComponent);
}

void ANPCController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	const auto ShooterCharacter = Cast<ANPCChar>(InPawn);
	if (ShooterCharacter)
	{
		RunBehaviorTree(ShooterCharacter->BehaviorTreeAsset);
	}
}

void ANPCController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	const auto AimActor = GetFocusOnActor();
	SetFocus(AimActor);
}

AActor* ANPCController::GetFocusOnActor() const
{
	if(!GetBlackboardComponent()) return nullptr;
	return Cast<AActor>(GetBlackboardComponent()->GetValueAsObject(FocusOnKeyName));
	
}
