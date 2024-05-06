// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteBarrera.h"

// Sets default values for this component's properties
UComponenteBarrera::UComponenteBarrera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UComponenteBarrera::CrearBarrerra()
{
	UWorld* World = GetWorld();
	if (World != nullptr) {

		FTransform ComponentTransform (this->GetComponentTransform()); //Obtenemos la transformacion del componente

		//Creamos la barrera en la posicion del componente
		World -> SpawnActor<AActor>(BarreraToSpawn, ComponentTransform); 
		World->SpawnActor<AActor>(BarreraToSpawn, ComponentTransform);
		World->SpawnActor<AActor>(BarreraToSpawn, ComponentTransform);
		World->SpawnActor<AActor>(BarreraToSpawn, ComponentTransform);

	}
}


// Called when the game starts
void UComponenteBarrera::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteBarrera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

