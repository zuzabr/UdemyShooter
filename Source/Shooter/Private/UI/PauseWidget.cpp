// Shooter Game All the Rights Reserved


#include "UI/PauseWidget.h"
#include "Gameframework/GameModeBase.h"
#include "Components/Button.h"

void UPauseWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (ClearPauseButton)
	{
		ClearPauseButton->OnClicked.AddDynamic(this, &UPauseWidget::OnClearPause);
	}

	
}

void UPauseWidget::OnClearPause()
{
	if (!GetWorld() || !GetWorld()->GetAuthGameMode()) return;
	GetWorld()->GetAuthGameMode()->ClearPause();
}