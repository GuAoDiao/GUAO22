// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject25.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject25 : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TMap<int32, FString> TestValue;
};
