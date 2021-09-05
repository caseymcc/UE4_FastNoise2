// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class FastNoise2Example : ModuleRules
{
    public FastNoise2Example(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] {  });

        CMakeTarget.add(Target, this, "FastNoise", Path.Combine(this.ModuleDirectory, "../Deps/FastNoise2"), "-DFASTNOISE2_NOISETOOL=OFF");
    }
}
