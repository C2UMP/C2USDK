// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryItem.h"
#include "TBLStructs.h"
#include "Inventory.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TBL_API UInventory : public UActorComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void PickupItem(AInventoryItem* Item, int StackCountToAdd, EPickupEquipOptions EquipOptions, AActor* Initiator, bool bIgnoreStateCheck, bool bGiveWeapon);
};
