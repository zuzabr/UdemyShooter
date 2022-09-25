// Shooter Game All the Rights Reserved

#include "UI/StatisticWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

void UStatisticWidget::SetPlayerName(const FText& Text)
{
	if (!PlayerNameText) return;
	PlayerNameText->SetText(Text);
}

void UStatisticWidget::SetKillsText(const FText& Text)
{
	if (!KillsText) return;
	KillsText->SetText(Text);
}

void UStatisticWidget::SetDeathsText(const FText& Text)
{
	if (!DeathsText) return;
	DeathsText->SetText(Text);
}

void UStatisticWidget::SetTeamText(const FText& Text)
{
	if (!TeamText) return;
	TeamText->SetText(Text);
}

void UStatisticWidget::SetPlayerImageVisibility(bool Visible)
{
	if (!PlayerImage) return;
	PlayerImage->SetVisibility(Visible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}