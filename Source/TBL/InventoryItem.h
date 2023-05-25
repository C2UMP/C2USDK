// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TBLActor.h"
#include "InventoryItem.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FInventoryItemDisplayInfo {
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemDescription;
};

UCLASS()
class TBL_API AInventoryItem : public ATBLActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryItemDisplayInfo DisplayInfo;
};
