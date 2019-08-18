// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject18.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject18 : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	TSoftObjectPtr<AActor> TestValue;
};
