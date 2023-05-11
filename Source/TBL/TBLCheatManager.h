// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "TBLCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API UTBLCheatManager : public UCheatManager
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void GiveHorse();
};
