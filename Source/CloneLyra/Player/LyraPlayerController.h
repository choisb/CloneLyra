// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/PlayerController.h"
#include "LyraPlayerController.generated.h"

/** Minimal class that supports extension by game feature plugins */
UCLASS()
class ALyraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ALyraPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer());
};