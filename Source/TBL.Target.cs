using UnrealBuildTool;
using System.Collections.Generic;

public class TBLTarget : TargetRules
{
	public TBLTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "TBL" } );
	}
}
