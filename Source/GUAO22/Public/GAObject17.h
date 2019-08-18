// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject17.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject17 : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TWeakObjectPtr<AActor> TestValue;
};
