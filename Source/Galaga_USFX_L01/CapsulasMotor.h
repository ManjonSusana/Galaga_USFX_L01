// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "CapsulasMotor.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACapsulasMotor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	ACapsulasMotor();
	virtual void PickUp(); //es para recoger el objeto
	virtual void PutDown(FTransform TargetLocation); //es para dejar el objeto
	
};
