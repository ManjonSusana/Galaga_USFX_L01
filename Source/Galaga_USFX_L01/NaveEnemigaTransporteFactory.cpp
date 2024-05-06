// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteFactory.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
<<<<<<< HEAD
#include "NaveEnemigaTransporteAereo.h"
#include "NaveEnemigaTransporteTerrestre.h"
=======
>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097

ANaveEnemiga* ANaveEnemigaTransporteFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{

<<<<<<< HEAD

	if (nave == "Transporte") {

		//spawn NaveEnemiegaCaza
		return World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
	}
	return nullptr;

=======
	if (nave == "Transporte") {


		return World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
	}
	return nullptr;
>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
}
