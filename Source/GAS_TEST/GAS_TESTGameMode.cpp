// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAS_TESTGameMode.h"
#include "GAS_TESTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAS_TESTGameMode::AGAS_TESTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
