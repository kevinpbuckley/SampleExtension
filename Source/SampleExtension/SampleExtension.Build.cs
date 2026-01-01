// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SampleExtension : ModuleRules
{
	public SampleExtension(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
		);

		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"VibeUE"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"UnrealEd",
				"EditorScriptingUtilities",
				"EditorSubsystem",
				"Slate",
				"SlateCore",
				"UMG",
				"Kismet",
				"KismetCompiler",
				"BlueprintGraph",
				"Projects",
				"AssetRegistry",
				"MessageLog",
				"EditorStyle",
				"AssetTools",
				"PropertyEditor",
				"LevelEditor",
				"ToolMenus"
			}
		);

		if (Target.bBuildEditor == true)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"PropertyEditor",
					"BlueprintEditorLibrary",
					"UMGEditor"
				}
			);
		}

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}
}