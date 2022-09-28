// Shooter Game All the Rights Reserved


#include "AI/NPCChar.h"
#include "AI/NPCController.h"
#include "Weapon/NPCWeaponComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BrainComponent.h"
#include "Components/WidgetComponent.h"
#include "UI/HealthBarWidget.h"
#include "Player/HealthComponent.h"

ANPCChar::ANPCChar(const FObjectInitializer& ObjInit)
	:Super(ObjInit.SetDefaultSubobjectClass<UNPCWeaponComponent>("WeaponComponent"))
{
	AutoPossessAI = EAutoPossessAI::Disabled;
	AIControllerClass = ANPCController::StaticClass();

	bUseControllerRotationYaw = false;
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 200.0f, 0.0f);
	}

	HealthWidgetComponent = CreateDefaultSubobject<UWidgetComponent>("HealthWidgetComponent");
	HealthWidgetComponent->SetupAttachment(GetRootComponent());
	HealthWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
}

void ANPCChar::BeginPlay()
{
	Super::BeginPlay();
	check(HealthWidgetComponent);
}

void ANPCChar::OnHealthChanged(float Health)
{
	Super::OnHealthChanged(Health);

	const auto HealthBarWidget = Cast<UHealthBarWidget>(HealthWidgetComponent->GetUserWidgetObject());
	if (!HealthBarWidget) return;
	HealthBarWidget->SetHealthPercent(HealthComponent->GetHealthPercent());
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
