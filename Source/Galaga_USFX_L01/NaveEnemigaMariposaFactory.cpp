// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaMariposaFactory.h"
#include "NaveEnemigaMariposa.h"
#include "NaveEnemigaMariposaAsesina.h"
#include "NaveEnemigaMariposaEspia.h"

ANaveEnemiga* ANaveEnemigaMariposaFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{

	if (nave == "Mariposa") {

		//spawn NaveEnemiegaCaza
		return World->SpawnActor<ANaveEnemigaMariposa>(SpawnLocation, SpawnRotation);
	}
	return nullptr;
}
