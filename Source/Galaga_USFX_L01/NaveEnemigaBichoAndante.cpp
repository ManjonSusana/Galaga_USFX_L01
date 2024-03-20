// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBichoAndante.h"

ANaveEnemigaBichoAndante::ANaveEnemigaBichoAndante()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaBichoAndante::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaBichoAndante::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}


void ANaveEnemigaBichoAndante::Mover(float DeltaTime)
{
}

void ANaveEnemigaBichoAndante::Disparar()
{
}

void ANaveEnemigaBichoAndante::Atacar()
{

}

void ANaveEnemigaBichoAndante::Escapar()
{
}
