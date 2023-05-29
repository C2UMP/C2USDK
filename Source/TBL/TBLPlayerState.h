#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TBLPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API ATBLPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACharacter> NextSpawnPawnSubclass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Kills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Deaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Assists;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Takedown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int GlobalRank;
};
