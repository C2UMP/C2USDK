#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TBLGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API UTBLGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMouseCursor;
};
