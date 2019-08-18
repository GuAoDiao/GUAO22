// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject43.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject43 : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Client, Reliable)
	void ClientTestFunc();
};
