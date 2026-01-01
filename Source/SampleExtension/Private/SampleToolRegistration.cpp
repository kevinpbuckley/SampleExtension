// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tools/SampleTools.h"
#include "VibeUE/Public/Core/ToolRegistry.h"

// Register the sample tool
REGISTER_VIBEUE_TOOL(create_new_level,
	"Create a new level with specified path, name, and type (normal or open world)",
	"Sample",
	TOOL_PARAMS(
		TOOL_PARAM("LevelPath", "The path where to create the level (e.g., /Game/Levels)", "string", true),
		TOOL_PARAM("LevelName", "The name of the new level", "string", true),
		TOOL_PARAM("OpenWorld", "Whether to create an open world level (true) or normal level (false)", "boolean", false)
	),
	{
		FString LevelPath = Params.FindRef(TEXT("LevelPath"));
		FString LevelName = Params.FindRef(TEXT("LevelName"));
		FString OpenWorldStr = Params.FindRef(TEXT("OpenWorld"));

		bool bOpenWorld = OpenWorldStr.ToLower() == TEXT("true") ||
						 OpenWorldStr.ToLower() == TEXT("1") ||
						 OpenWorldStr.ToLower() == TEXT("yes");

		return USampleTools::CreateNewLevel(LevelPath, LevelName, bOpenWorld);
	}
);