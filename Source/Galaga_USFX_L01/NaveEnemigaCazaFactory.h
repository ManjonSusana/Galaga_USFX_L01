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

<<<<<<< HEAD

public:
	static ANaveEnemiga* CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);


=======
public:
	static ANaveEnemiga* CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);
>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
	
};
