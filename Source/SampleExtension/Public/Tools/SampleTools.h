// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SampleTools.generated.h"

/**
 * Sample tools class demonstrating VibeUE tool registration
 */
UCLASS()
class USampleTools : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Create a new level with specified parameters
	 * @param LevelPath The path where to create the level (e.g., "/Game/Levels")
	 * @param LevelName The name of the new level
	 * @param bOpenWorld Whether to create an open world level (true) or normal level (false)
	 * @return Success message or error description
	 */
	static FString CreateNewLevel(const FString& LevelPath, const FString& LevelName, bool bOpenWorld);
};