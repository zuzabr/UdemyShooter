// Shooter Game All the Rights Reserved


#include "Menu/MenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "ShooterGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Menu/LvlItemWidget.h"
#include "Components/HorizontalBox.h"


void UMenuWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &UMenuWidget::OnStartGame);
	}

	if (QuitGameButton)
	{
		QuitGameButton->OnClicked.AddDynamic(this, &UMenuWidget::OnQuitGame);
	}

	InitLvlItems();
}

void UMenuWidget::OnStartGame()
{
	const auto GameInstance = GetShooterGameInstance();
	if (!GameInstance) return;

	UGameplayStatics::OpenLevel(this, GameInstance->GetStartupLvl().LevelName);
}

void UMenuWidget::OnQuitGame()
{
	UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, true);
}

void UMenuWidget::InitLvlItems()
{
	const auto GameInstance = GetShooterGameInstance();
	if (!GameInstance) return;

	checkf(GameInstance->GetLevelsData().Num() != 0, TEXT("Levels data must not be empty!"));

	if (!LvlItemsBox) return;
	LvlItemsBox->ClearChildren();

	for (auto LvlData : GameInstance->GetLevelsData())
	{
		const auto LvlItemWidget = CreateWidget<ULvlItemWidget>(GetWorld(), LvlItemWidgetClass);
		if (!LvlItemWidget) continue;

		LvlItemWidget->SetLvlData(LvlData);
		LvlItemWidget->OnLvlSelected.AddUObject(this, &UMenuWidget::OnLvlSelected);

		LvlItemsBox->AddChild(LvlItemWidget);
		LvlItemWidgets.Add(LvlItemWidget);
	}

	if (GameInstance->GetStartupLvl().LevelName.IsNone())
	{
		OnLvlSelected(GameInstance->GetLevelsData()[0]);
	}
	else
	{
		OnLvlSelected(GameInstance->GetStartupLvl());
	}
}

void UMenuWidget::OnLvlSelected(const FLevelData& Data)
{
	const auto GameInstance = GetShooterGameInstance();
	if (!GameInstance) return;

	GameInstance->SetStartupLvl(Data);

	for (auto LvlItemWidget : LvlItemWidgets)
	{
		if (LvlItemWidget)
		{
			const auto IsSelected = Data.LevelName == LvlItemWidget->GetLvlData().LevelName;
			LvlItemWidget->SetSelected(IsSelected);
		}
	}

}

UShooterGameInstance* UMenuWidget::GetShooterGameInstance() const
{
	if (!GetWorld()) return nullptr;
	return GetWorld()->GetGameInstance<UShooterGameInstance>();
}