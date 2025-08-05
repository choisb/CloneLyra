// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"
#include "LyraExperienceDefinition.generated.h"

class ULyraPawnData;

/**
 * Definition of an experience
 */
UCLASS(BlueprintType, Const)
class ULyraExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category=Gameplay)
	TObjectPtr<const ULyraPawnData> DefaultPawnData;
};