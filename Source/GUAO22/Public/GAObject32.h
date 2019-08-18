// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject32.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject32 : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void TestFunction();
};

