// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	Velocidad = 300.0f;
}

void ANaveEnemigaCaza::BeginPlay()
{
		Super::BeginPlay(); 
		
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
	Mover (DeltaTime);
}


void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float DesplazamientoX = Velocidad * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX*  - 1, PosicionActual.Y, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.X < LimiteInferiorX) {

		SetActorLocation(FVector(300.0f, PosicionActual.Y, PosicionActual.Z));

	}
	//SetActorLocation(FVector(GetActorLocation().X - Velocidad, GetActorLocation().Y, GetActorLocation().Z));


}

void ANaveEnemigaCaza::Disparar()
{

}

void ANaveEnemigaCaza::Atacar()
{
}

void ANaveEnemigaCaza::Escapar()
{
}
