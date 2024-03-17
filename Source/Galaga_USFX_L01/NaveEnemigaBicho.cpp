// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBicho.h"

// Sets default values
ANaveEnemigaBicho::ANaveEnemigaBicho()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

// Called when the game starts or when spawned
void ANaveEnemigaBicho::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveEnemigaBicho::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime); 
		
}

void ANaveEnemigaBicho::Mover()
{
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
