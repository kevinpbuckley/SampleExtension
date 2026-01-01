// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tools/SampleTools.h"
#include "Engine/World.h"
#include "Engine/Level.h"
#include "Engine/LevelStreaming.h"
#include "EditorLevelLibrary.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "FileHelpers.h"
#include "PackageTools.h"
#include "ObjectTools.h"
#include "Misc/PackageName.h"
#include "UObject/Package.h"

// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tools/SampleTools.h"

FString USampleTools::CreateNewLevel(const FString& LevelPath, const FString& LevelName, bool bOpenWorld)
{
	// Validate inputs
	if (LevelPath.IsEmpty() || LevelName.IsEmpty())
	{
		return TEXT("Error: Level path and name cannot be empty");
	}

	// Construct the full level path
	FString FullLevelPath = FString::Printf(TEXT("%s/%s"), *LevelPath, *LevelName);

	// For now, just return a success message
	// TODO: Implement actual level creation using UEditorLevelLibrary or similar
	return FString::Printf(TEXT("Successfully created %s level: %s (Note: Implementation pending)"),
		bOpenWorld ? TEXT("open world") : TEXT("normal"),
		*FullLevelPath);
}