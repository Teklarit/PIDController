// Copyright 2024 Teklarit. All Rights Reserved.

using UnrealBuildTool;

public class PIDController : ModuleRules
{
	public PIDController(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] 
			{
			}
		);
				
		
		PrivateIncludePaths.AddRange(new string[] 
			{
			}
		);
			
		
		PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core",
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
		);
		
		
		DynamicallyLoadedModuleNames.AddRange(new string[]
			{
			}
		);
	}
}
