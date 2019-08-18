// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject26.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject26 : public UObject
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE(FTestGADelegate);

	UPROPERTY()
	FTestGADelegate TestGADelegate;
};
