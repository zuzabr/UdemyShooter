// Shooter Game All the Rights Reserved


#include "UI/DefaultHUD.h"
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"
#include "GM_Shooter.h"

void ADefaultHUD::DrawHUD()
{
	Super::DrawHUD();

	//DrawCrosshair();
}

void ADefaultHUD::BeginPlay()
{
	Super::BeginPlay();
	
	GameWidgets.Add(EMatchState::InProgress, CreateWidget<UUserWidget>(GetWorld(), PlayerHUDWidgetClass));
	GameWidgets.Add(EMatchState::Pause, CreateWidget<UUserWidget>(GetWorld(), PauseWidgetClass));
	GameWidgets.Add(EMatchState::GameOver, CreateWidget<UUserWidget>(GetWorld(), GameOverWidgetClass));

	for (auto GameWidgetPair : GameWidgets)
	{
		const auto GameWidget = GameWidgetPair.Value;
		if (!GameWidget) continue;

		GameWidget->AddToViewport();
		GameWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	if (GetWorld())
	{
		const auto GameMode = Cast<AGM_Shooter>(GetWorld()->GetAuthGameMode());
		if (GameMode)
		{
			GameMode->OnMatchStateChanged.AddUObject(this, &ADefaultHUD::OnMatchStateChanged); // Привязка к делегату
		}
	}
}

void ADefaultHUD::DrawCrosshair()
{
	
	const TInterval<float> Center(Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f);

	const float HalfLineSize = 10.0f;
	const float LineThickness = 2.0f;
	const FLinearColor LineColor = FLinearColor::Green;
	DrawLine(Center.Min - HalfLineSize, Center.Max, Center.Min + HalfLineSize, Center.Max, LineColor, LineThickness);
	DrawLine(Center.Min, Center.Max - HalfLineSize, Center.Min, Center.Max + HalfLineSize,LineColor, LineThickness);
}

void ADefaultHUD::OnMatchStateChanged(EMatchState State)
{
	if (CurrentWidget)
	{
		CurrentWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	if (GameWidgets.Contains(State))
	{
		CurrentWidget = GameWidgets[State];
	}

	if (CurrentWidget)
	{
		CurrentWidget->SetVisibility(ESlateVisibility::Visible);
	}
	UE_LOG(LogTemp, Warning, TEXT("Match state changed: %s"), *UEnum::GetValueAsString(State));
}

