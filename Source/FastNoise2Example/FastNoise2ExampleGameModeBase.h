// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FastNoise2ExampleGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FASTNOISE2EXAMPLE_API AFastNoise2ExampleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	void InitGame(const FString & MapName, const FString &Options, FString &ErrorMessage) override;
	
};
