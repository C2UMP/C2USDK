#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TBLStructs.h"
#include "TBLPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API ATBLPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void ServerBroadcast(FString Msg, EChatType ChatType, FColor OverrideColor);
	UFUNCTION(BlueprintCallable)
	void GiveWeapon(FName WeaponName);
};
