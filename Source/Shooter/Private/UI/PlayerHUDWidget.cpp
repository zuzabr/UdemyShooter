// Shooter Game All the Rights Reserved


#include "UI/PlayerHUDWidget.h"
#include "Player/HealthComponent.h"

float UPlayerHUDWidget::GetHealthPercent() const
{
	const auto Player = GetOwningPlayerPawn();
	if (!Player) return 0.0f;

	const auto Component = Player->GetComponentByClass(UHealthComponent::StaticClass());
	const auto HealthComponent = Cast<UHealthComponent>(Component);
	if (!HealthComponent) return 0.0;

	return HealthComponent->GetHealthPercent();
}

