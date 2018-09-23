using UnrealBuildTool;
using System.Collections.Generic;

public class EditorTarget : TargetRules
{
	public EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "ExtendBlueprint" } );
	}
}