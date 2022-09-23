// Shooter Game All the Rights Reserved


#include "AI/HealthAmountDecorator.h"
#include "AIController.h"
#include "Player/HealthComponent.h"
#include "Player/DefaultChar.h"


UHealthAmountDecorator::UHealthAmountDecorator()
{
	NodeName = "Health Percent";
}
bool UHealthAmountDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (!Controller) return false;
	const auto ThisPawn = Cast<ADefaultChar>(Controller->GetPawn());
	if (!ThisPawn) return false;

	const auto HealthComp = ThisPawn->GetHealth(ThisPawn);
	if (!HealthComp || HealthComp->IsDead()) return false;
	//UE_LOG(LogTemp, Warning, TEXT("Your message"));
	return HealthComp->GetHealthPercent() <= HealthPercent;
}