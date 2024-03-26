// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TetrisInventoryRuntime : ModuleRules
{
	public TetrisInventoryRuntime(ReadOnlyTargetRules Target) : base(Target)
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
				"LyraGame",
				"ModularGameplay",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"ApplicationCore",
				"Engine",
				"Slate",
				"SlateCore",
				"NetCore",
				"GameplayTags",
				"GameplayTasks",
				"GameplayAbilities",
				"GameplayMessageRuntime",
				"CommonUI",
				"DeveloperSettings",
				"GameplayMessageRuntime",
				"CommonUI",
				"DataRegistry",
				"EnhancedInput",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
