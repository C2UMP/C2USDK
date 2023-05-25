// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EFaction : uint8 {
	Agatha UMETA(DisplayName = "Agatha"),
	Mason UMETA(DisplayName = "Mason"),
	FFA UMETA(DisplayName = "FFA"),
	None UMETA(DisplayName = "None"),
	All UMETA(DisplayName = "All"),
};

UENUM(BlueprintType)
enum class EGameModeType : uint8 {
	TeamObjective UMETA(DisplayName = "TeamObjective"),
	TeamDeathMatch UMETA(DisplayName = "TeamDeathMatch"),
	FreeForAll UMETA(DisplayName = "FreeForAll"),
	Symmetrical UMETA(DisplayName = "Symmetrical"),
};

class TBL_API TBLStructs {};
