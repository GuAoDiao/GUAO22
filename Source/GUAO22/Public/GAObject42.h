// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject42.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject42 : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Client, Reliable, WithValidation)
	void ClientTestFunc();
};
