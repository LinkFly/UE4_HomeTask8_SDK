// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4_HomeTask8_SDKTarget : TargetRules
{
	public UE4_HomeTask8_SDKTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "UE4_HomeTask8_SDK" } );
	}
}
