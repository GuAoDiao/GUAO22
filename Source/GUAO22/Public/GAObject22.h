// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject22.generated.h"

USTRUCT()
struct FGATestStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY()
	float Vlaue;
	UPROPERTY()
	int32 Vlaue2;
};

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject22 : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	FGATestStruct TestValue;
};
