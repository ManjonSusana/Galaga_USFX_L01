// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaFactory.h"
#include "NaveEnemigaCazaFactory.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaFactory : public ANaveEnemigaFactory
{
	GENERATED_BODY()

public:
	static ANaveEnemiga* CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);
	
};
