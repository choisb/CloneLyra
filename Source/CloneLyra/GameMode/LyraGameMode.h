// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/GameModeBase.h"

#include "LyraGameMode.generated.h"

UCLASS()
class ALyraGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALyraGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer());
	
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

protected:
	void HandleMatchAssignmentIfNotExpectingOne();
};