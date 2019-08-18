// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject27.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject27 : public UObject
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTestGAMultiDelegate);

	UPROPERTY(BlueprintAssignable)
	FTestGAMultiDelegate TestGAMultiDelegate;
};
