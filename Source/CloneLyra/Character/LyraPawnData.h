// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"

#include "LyraPawnData.generated.h"

/**
 * ULyraPawnData
 *
 *	Non-mutable data asset that contains properties used to define a pawn.
 */
UCLASS(BlueprintType, Const, Meta = (DisplayName = "Lyra Pawn Data", ShortTooltip = "Data asset used to define a Pawn."))
class CLONELYRA_API ULyraPawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	ULyraPawnData(const FObjectInitializer& ObjectInitializer);

};