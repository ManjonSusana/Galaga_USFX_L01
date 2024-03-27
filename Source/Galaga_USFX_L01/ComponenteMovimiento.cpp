// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMovimiento.h"

// Sets default values for this component's properties
UComponenteMovimiento::UComponenteMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	MovimientoComun = 500.0f;   //DANDO VALOR AL MOVIMIENTO

	limInferiorX = -1600.0f;
	limDerecho = 1000.0f;
	limIzquierdo = 1000.0f;

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
	AActor* Parent = GetOwner();  //GetOwner es una funcion devuelve una referencia del objeto actor
	if (Parent)
	{
		// Get the current location of the owner
		FVector CurrentLocation = Parent->GetActorLocation();

		float MovimientoX = FMath :: Sin(CurrentLocation.Y * ZigzagFrecuencia) * ZigzagAmplitud * DeltaTime;

		// Calcular el movimiento en el eje Y
		float MovimientoY = FMath::Cos(CurrentLocation.X * ZigzagFrecuencia) * ZigzagAmplitud * DeltaTime;

		// Calcular la nueva posición
		FVector NewLocation = FVector(CurrentLocation.X + MovimientoX, CurrentLocation.Y + MovimientoY, CurrentLocation.Z);

		// Establecer la nueva posición
		Parent->SetActorLocation(NewLocation);
		

		// Limite del mapa
		if (NewLocation.X < limInferiorX)
		{
			Parent->SetActorLocation(FVector(-300.0f, CurrentLocation.Y, CurrentLocation.Z));
		}
		
		//float MovimientoComunX = MovimientoComun * DeltaTime;

		// Calculate the new position based on the movement speed

		//FVector NewLocation = FVector(CurrentLocation.X + MovimientoComun, CurrentLocation.Y, CurrentLocation.Z);
		// Set the new position
		//Parent->SetActorLocation(NewLocation);


		/*
		//Limite del mapa
		if (NewLocation.X < limInferiorX)
		{
			Parent->SetActorLocation(FVector(1500.0f, CurrentLocation.Y, CurrentLocation.Z));
		}*/
	}
}

