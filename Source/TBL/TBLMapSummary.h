// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TBLStructs.h"

/**
 * 
 */

class TBL_API TBLMapSummary
{
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText MapName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText MapDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFaction AttackingFaction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameModeType GamemodeType;
};
