#pragma once

#include "CoreMinimal.h"
#include "TBLStructs.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EFaction : uint8 {
	Agatha,
	Mason,
	FFA,
	None,
	All,
};

UENUM(BlueprintType)
enum class EGameModeType : uint8 {
	TeamObjective,
	TeamDeathMatch,
	FreeForAll,
	Symmetrical,
	LastTeamStanding,
	CapturePoint,
	Pushable,
	CaptureTheFlag,
	Arena,
	Scenario,
	Brawl
};

UENUM(BlueprintType)
enum class EInventoryItemSlot : uint8 {
	Carryable,
	Primary,
	Secondary,
	Shield,
	Knife,
	Fists,
	Item,
	Bandage,
	Ammo,
	Custom,
	Downed,
	Quiver,
	Novelty,
	Special
};

UENUM(BlueprintType)
enum class EPickupEquipOptions : uint8 {
	Equip,
	EquipImmediately,
	LeaveUnequipped,
};

UENUM(BlueprintType)
enum class EMod : uint8 {
	Invulnerable,
	DisableStaminaDrain,
	UnlimitedAmmo,
	CannotUseInteractables
};

UENUM(BlueprintType)
enum class EStat : uint8 {
	None,
	Health,
	MaxHealth,
	Overheal,
	Stamina,
	MaxStamina
};

UENUM(BlueprintType)
enum class EChatType : uint8 {
	AllSay,
	TeamSay,
	Whisper,
	Admin,
	Objective,
	System,
	ServerSay,
	Debug,
	CrosshairMsg,
	Backend,
	Party,
	Spectator,
	ClosedCaption,
	ClosedCaptionMason,
	ClosedCaptionAgatha
};

USTRUCT(BlueprintType)
struct FInventoryItemDisplayInfo {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemDescription;
};

class TBL_API TBLStructs {};
