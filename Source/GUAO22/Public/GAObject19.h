// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject19.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject19 : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	TSubclassOf<AActor> TestValue;
};
