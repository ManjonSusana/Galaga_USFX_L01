// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAbeja.h"

// Sets default values
ANaveEnemigaAbeja::ANaveEnemigaAbeja()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	velocidad = 300.0f;
}

// Called when the game starts or when spawned
void ANaveEnemigaAbeja::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaAbeja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}


void ANaveEnemigaAbeja::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float DesplazamientoX = velocidad * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX * -1, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < LimiteInferiorX) {

		SetActorLocation(FVector(300.0f, PosicionActual.Y, PosicionActual.Z));

	}
}

void ANaveEnemigaAbeja::Disparar()
{
}

void ANaveEnemigaAbeja::Atacar()
{
}

void ANaveEnemigaAbeja::Escapar()
{
}

