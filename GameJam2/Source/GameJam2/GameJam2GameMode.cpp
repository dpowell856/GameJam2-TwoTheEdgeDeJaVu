// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam2GameMode.h"
#include "GameJam2Pawn.h"

AGameJam2GameMode::AGameJam2GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AGameJam2Pawn::StaticClass();
}
