// Shooter Game All the Rights Reserved


#include "Menu/GMMenu.h"
#include "Menu/MenuPlayerController.h"
#include "Menu/MenuHUD.h"

AGMMenu::AGMMenu()
{
	PlayerControllerClass = AMenuPlayerController::StaticClass();
	HUDClass = AMenuHUD::StaticClass();
}