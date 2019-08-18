// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject06.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject06 : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Test")
	float TestFloatValue;
};
