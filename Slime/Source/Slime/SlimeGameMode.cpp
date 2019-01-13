// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SlimeGameMode.h"
#include "SlimeHUD.h"
#include "SlimeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASlimeGameMode::ASlimeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASlimeHUD::StaticClass();
}
