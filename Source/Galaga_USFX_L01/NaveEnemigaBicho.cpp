// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBicho.h"

// Sets default values
ANaveEnemigaBicho::ANaveEnemigaBicho()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	velocidad = 300.0f;
}

// Called when the game starts or when spawned
void ANaveEnemigaBicho::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveEnemigaBicho::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime); 
		Mover(DeltaTime);
		
}

void ANaveEnemigaBicho::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float DesplazamientoX = velocidad * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < LimiteInferiorX) {

		SetActorLocation(FVector(300.0f, PosicionActual.Y, PosicionActual.Z));

	}
	//SetActorLocation(FVector(GetActorLocation().X - Velocidad, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaBicho::Disparar()
{
}

void ANaveEnemigaBicho::Atacar()
{
}

void ANaveEnemigaBicho::Escapar()
{
}
