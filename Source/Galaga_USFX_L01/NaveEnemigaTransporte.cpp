// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	velocidad = 300.0f;
}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
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


void ANaveEnemigaTransporte::Disparar()
{
}

void ANaveEnemigaTransporte::Atacar()
{
}

void ANaveEnemigaTransporte::Escapar()
{
}
