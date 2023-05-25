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

UENUM(BlueprintType)
enum class EInventoryItemSlot : uint8 {
	Carryable UMETA(DisplayName = "Carryable"),
	Primary UMETA(DisplayName = "Primary"),
	Secondary UMETA(DisplayName = "Secondary"),
	Shield UMETA(DisplayName = "Shield"),
};

UENUM(BlueprintType)
enum class EPickupEquipOptions : uint8 {
	Equip UMETA(DisplayName = "Equip"),
	EquipImmediately UMETA(DisplayName = "EquipImmediately"),
	LeaveUnequipped UMETA(DisplayName = "LeaveUnequipped"),
};

class TBL_API TBLStructs {};
