// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject21.generated.h"

UENUM()
enum class EGATestEnum : uint8
{
	A,
	B
};

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject21 : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	EGATestEnum GATestEnum;
};
