#pragma once

#include "CoreMinimal.h"
#include "TBLCharacterBase.h"
#include "Inventory.h"
#include "StatsComponent.h"
#include "TBLCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API ATBLCharacter : public ATBLCharacterBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStatsComponent* Stats;
	UFUNCTION(BlueprintCallable)
	UInventory* GetInventory();
};
