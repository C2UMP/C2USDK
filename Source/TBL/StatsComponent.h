#pragma once

#include "CoreMinimal.h"
#include "TBLComponent.h"
#include "TBLStructs.h"
#include "StatsComponent.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API UStatsComponent : public UTBLComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void ApplyModDelta(EMod Mod, int Delta);
	UFUNCTION(BlueprintCallable)
	void ApplyBonus(EStat Stat, float Value, bool bCanOverCharge);
};