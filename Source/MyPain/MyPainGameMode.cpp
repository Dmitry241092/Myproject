// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyPainGameMode.h"
#include "MyPainHUD.h"
#include "MyPainCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyPainGameMode::AMyPainGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyPainHUD::StaticClass();
}
