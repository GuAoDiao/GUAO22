// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject40.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject40 : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerTestFunc();
};
