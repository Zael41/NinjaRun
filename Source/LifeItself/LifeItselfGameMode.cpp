// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeItselfGameMode.h"
#include "LifeItselfBall.h"

ALifeItselfGameMode::ALifeItselfGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ALifeItselfBall::StaticClass();
}
