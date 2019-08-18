// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject07.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject07 : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Category = "Test")
	float TestFloatValue;
};
