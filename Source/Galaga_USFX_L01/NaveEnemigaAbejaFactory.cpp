// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAbejaFactory.h"
#include "NaveEnemigaAbeja.h"
#include "NaveEnemigaAbejaComun.h"
#include "NaveEnemigaAbejaVenenosa.h"

ANaveEnemiga* ANaveEnemigaAbejaFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{

	if (nave == "Abeja") {

		//spawn NaveEnemiegAbeja
		return World->SpawnActor<ANaveEnemigaAbeja>(SpawnLocation, SpawnRotation);
	}
	return nullptr;
}
