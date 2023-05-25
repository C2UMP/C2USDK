// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TBLCharacterBase.h"
#include "Inventory.h"
#include "TBLCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API ATBLCharacter : public ATBLCharacterBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	UInventory* GetInventory();
};
