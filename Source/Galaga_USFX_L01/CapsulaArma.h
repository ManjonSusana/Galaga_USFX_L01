// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "CapsulaArma.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACapsulaArma : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	ACapsulaArma();
	virtual void PickUp(); //es para recoger el objeto
	virtual void PutDown(FTransform TargetLocation); //es para dejar el objeto
};
