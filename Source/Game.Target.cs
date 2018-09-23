using UnrealBuildTool;
using System.Collections.Generic;

public class GameTarget : TargetRules
{
	public GameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "ExtendBlueprint" } );
	}
}
