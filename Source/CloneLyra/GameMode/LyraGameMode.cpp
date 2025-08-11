// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraGameMode.h"
#include "CloneLyra/Character/LyraCharacter.h"
#include "CloneLyra/GameMode/LyraGameState.h"
#include "CloneLyra/Player/LyraPlayerController.h"
#include "CloneLyra/Player/LyraPlayerState.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraGameMode)

ALyraGameMode::ALyraGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameStateClass = ALyraGameState::StaticClass();
	PlayerControllerClass = ALyraPlayerController::StaticClass();
	PlayerStateClass = ALyraPlayerState::StaticClass();
	DefaultPawnClass = ALyraCharacter::StaticClass();
}

void ALyraGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::HandleMatchAssignmentIfNotExpectingOne);
}

void ALyraGameMode::HandleMatchAssignmentIfNotExpectingOne()
{

}