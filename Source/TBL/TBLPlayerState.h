// Fill out your copyright notice in the Description page of Project Settings.

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
	TSubclassOf<APawn> NextSpawnPawnSubclass;
};
