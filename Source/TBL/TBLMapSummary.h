#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TBLStructs.h"
#include "TBLMapSummary.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API UTBLMapSummary : public UObject
{
	GENERATED_BODY()
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
