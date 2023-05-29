#pragma once

#include "CoreMinimal.h"
#include "TBLActor.h"
#include "TBLStructs.h"
#include "InventoryItem.generated.h"

/**
 * 
 */

UCLASS()
class TBL_API AInventoryItem : public ATBLActor
{
	GENERATED_BODY()
public:
	AInventoryItem();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryItemDisplayInfo DisplayInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	USceneComponent* ProjectileRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	USceneComponent* ProjectileSmoothing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	USceneComponent* FirstPersonTransformRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	USceneComponent* ThirdPersonTransformRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	UStaticMeshComponent* StaticMesh;
};