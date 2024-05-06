// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NavesBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNavesBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API INavesBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//virtual void builNaveMejoras() = 0;
	virtual void builNaveMejoras(FVector ubicacionNaveMejoras) = 0;
	virtual void buildMallaNave() = 0;
	virtual void buildVidaNave() = 0;	
	virtual void buildMotorNave() = 0;
	virtual void buildArmaNave() = 0;

	virtual class ANaveMejoras* getNaveMejoras() = 0;
};
