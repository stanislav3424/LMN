using UnrealBuildTool;

public class LMN : ModuleRules
{
    public LMN(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "UMG",
            "AIModule",
            "EnhancedInput",
            "Niagara",
            "NavigationSystem",
            "AIModule"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "Slate",
            "SlateCore"
        });
    }
}