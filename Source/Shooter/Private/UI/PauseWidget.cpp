// Shooter Game All the Rights Reserved


#include "UI/PauseWidget.h"
#include "Gameframework/GameModeBase.h"
#include "Components/Button.h"

bool UPauseWidget::Initialize()
{
	const auto InitStatus = Super::Initialize();
	if (ClearPauseButton)
	{
		ClearPauseButton->OnClicked.AddDynamic(this, &UPauseWidget::OnClearPause);
	}

	return InitStatus;
}

void UPauseWidget::OnClearPause()
{
	if (!GetWorld() || !GetWorld()->GetAuthGameMode()) return;
	GetWorld()->GetAuthGameMode()->ClearPause();
}