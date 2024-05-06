// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBichoFactory.h"
#include "NaveEnemigaBicho.h"
#include "NaveEnemigaBichoVolador.h"
#include "NaveEnemigaBichoAndante.h"
ANaveEnemiga* ANaveEnemigaBichoFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	if (nave == "Bicho") {

		//spawn NaveEnemiegaCaza
		return World->SpawnActor<ANaveEnemigaBicho>(SpawnLocation, SpawnRotation);
	}
	return nullptr;
}
