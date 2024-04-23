// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteFactory.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"

ANaveEnemiga* ANaveEnemigaTransporteFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{

	if (nave == "Transporte") {


		return World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
	}
	return nullptr;
}
