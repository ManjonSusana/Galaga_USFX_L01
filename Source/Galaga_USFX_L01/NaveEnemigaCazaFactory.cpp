// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
<<<<<<< HEAD
#include "NaveEnemigaCazaFlechas.h"
#include "NaveEnemigaCazaDisparos.h"
=======
#include "NaveEnemigaTransporte.h"

>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097

ANaveEnemiga* ANaveEnemigaCazaFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	if (nave == "Caza") {

		//spawn NaveEnemiegaCaza
<<<<<<< HEAD
		return World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
	}
=======
		return World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);	
	}
	
>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
	return nullptr;
}
