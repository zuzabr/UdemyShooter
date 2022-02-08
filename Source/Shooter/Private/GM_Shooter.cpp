// Shooter Game All the Rights Reserved


#include "GM_Shooter.h"
#include "Player/DefaultChar.h"
#include "Player/PlayerControllerShooter.h"
#include "UI/DefaultHUD.h"

AGM_Shooter::AGM_Shooter() // Тело конструктора
{
	DefaultPawnClass = ADefaultChar::StaticClass();
	PlayerControllerClass = APlayerControllerShooter::StaticClass();
	HUDClass = ADefaultHUD::StaticClass();
}