// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFactory.h"
#include "NaveEnemiga.h"

// Sets default values
ANaveEnemigaFactory::ANaveEnemigaFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveEnemigaFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
<<<<<<< HEAD

ANaveEnemiga* ANaveEnemigaFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	return nullptr;
=======
ANaveEnemiga* ANaveEnemigaFactory::CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	return nullptr;
	/*ANaveEnemiga* Enemiga = CrearNave(nave, World, SpawnLocation, SpawnRotation);
	return Enemiga;*/

>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
}

