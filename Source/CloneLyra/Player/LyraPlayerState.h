// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/PlayerState.h"
#include "LyraPlayerState.generated.h"


/** Pair this with a ModularGameModeBase */
UCLASS()
class  ALyraPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ALyraPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer());
};
