// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GAObject45.generated.h"

/**
 * 
 */
UCLASS()
class GUAO22_API UGAObject45 : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Server, WithValidation, Reliable)
	void ServerTestFunc();
	UFUNCTION(Server, WithValidation, Reliable)
	void ServerTestFunc1();
	UFUNCTION(Client, Reliable)
	void ClientTestFunc();
	UFUNCTION(Client, WithValidation, Reliable)
	void ClientTestFunc1();
	UFUNCTION(NetMulticast, Reliable)
	void MultiTestFunc();
	UFUNCTION(NetMulticast, Reliable)
	void MultiTestFunc2();
};
