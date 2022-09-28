// Shooter Game All the Rights Reserved


#include "UI/GoToMenuWidget.h"
#include "Components/Button.h"
#include "ShooterGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UGoToMenuWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (GoToMenuButton)
	{
		GoToMenuButton->OnClicked.AddDynamic(this, &UGoToMenuWidget::OnGoToMenu);
	}
}

void UGoToMenuWidget::OnGoToMenu()
{
	if (!GetWorld()) return;

	const auto GameInstance = GetWorld()->GetGameInstance<UShooterGameInstance>();
	if (!GameInstance) return;

	if (GameInstance->GetMenuLvlName().IsNone())
	{
		UE_LOG(LogTemp, Error, TEXT("Menu Level Name is None"));
		return;
	}


	UGameplayStatics::OpenLevel(this, GameInstance->GetMenuLvlName());
}