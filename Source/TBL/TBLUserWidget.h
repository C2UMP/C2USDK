// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TBLUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TBL_API UTBLUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsWidgetDisabledInDemoModel;
};
