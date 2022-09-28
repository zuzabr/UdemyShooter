// Shooter Game All the Rights Reserved


#include "Menu/LvlItemWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

void ULvlItemWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (LvlSelectButton)
	{
		LvlSelectButton->OnClicked.AddDynamic(this, &ULvlItemWidget::OnLvlItemClicked);
	}
}

void ULvlItemWidget::OnLvlItemClicked()
{
	OnLvlSelected.Broadcast(LvlData);
}

void ULvlItemWidget::SetSelected(bool IsSelected)
{
	if (FrameImage)
	{
		FrameImage->SetVisibility(IsSelected ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	}
}

void ULvlItemWidget::SetLvlData(const FLevelData& Data)
{
	LvlData = Data;

	if (LvlNameTextBlock)
	{
		LvlNameTextBlock->SetText(FText::FromName(Data.LevelDisplayName));
	}

	if (LvlImage)
	{
		LvlImage->SetBrushFromTexture(Data.LevelThumb);
	}
}