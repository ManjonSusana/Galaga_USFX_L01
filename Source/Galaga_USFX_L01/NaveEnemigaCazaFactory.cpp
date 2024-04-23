// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"


ANaveEnemiga* ANaveEnemigaCazaFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	if (nave == "Caza") {

		//spawn NaveEnemiegaCaza
		return World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);	
	}
	
	return nullptr;
}
