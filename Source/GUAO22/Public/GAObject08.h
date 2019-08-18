// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject08.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject08 : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	void OnRep_TestFloatValue() {}

	UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing = OnRep_TestFloatValue, Category = "Test")
	float TestFloatValue;
};
