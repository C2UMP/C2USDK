#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "TBLStructs.h"
#include "TBLMapSummary.h"
#include "TBLWorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API ATBLWorldSettings : public AWorldSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTBLMapSummary* MapSummary;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText MapName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText MapDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameModeType GamemodeType;
};
