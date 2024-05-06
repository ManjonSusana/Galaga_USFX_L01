// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMovimiento.h"

// Sets default values for this component's properties
UComponenteMovimiento::UComponenteMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	velocidad = 300.0f;
	limiteDerecha = 1800.0f;
	limiteIzquierda = -1800.0f;
	verificacion = true;
}


// Called when the game starts
void UComponenteMovimiento::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

//Implementacion del movimiento
// 
// Called every frame
void UComponenteMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Parent = GetOwner(); // Obtener una referencia al objeto actor propietario

	if (Parent)
	{
		if (verificacion) 
		{ 
			auto nuevaPosisicon = Parent->GetActorLocation()+ FVector(0.0f, velocidad* DeltaTime, 0.0f ); // Obtener la posicion actual del actor

			Parent->SetActorLocation(nuevaPosisicon); // Establecer la nueva posicion del actor
		}
		else
		{
			auto nuevaPosisicon = Parent->GetActorLocation() - FVector(0.0f, velocidad * DeltaTime, 0.0f); // Obtener la posicion actual del actor

			Parent->SetActorLocation(nuevaPosisicon); // Establecer la nueva posicion del actor
		}
		if(Parent->GetActorLocation().Y >= limiteDerecha)
		{
			verificacion = false;
		}
		else if(Parent->GetActorLocation().Y <= limiteIzquierda)
		{
				verificacion = true;
		}
	
	}
}
	

