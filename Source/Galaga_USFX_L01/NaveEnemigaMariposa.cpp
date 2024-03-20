// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaMariposa.h"

// Sets default values
ANaveEnemigaMariposa::ANaveEnemigaMariposa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	velocidad = 300.0f;
}

// Called when the game starts or when spawned
void ANaveEnemigaMariposa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaMariposa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ANaveEnemigaMariposa::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float DesplazamientoX = velocidad * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < LimiteInferiorX) {

		SetActorLocation(FVector(300.0f, PosicionActual.Y, PosicionActual.Z));

	}
}

void ANaveEnemigaMariposa::Disparar()
{
}

void ANaveEnemigaMariposa::Atacar()
{
}

void ANaveEnemigaMariposa::Escapar()
{
}

