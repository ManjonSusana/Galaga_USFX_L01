// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBichoVolador.h"

ANaveEnemigaBichoVolador::ANaveEnemigaBichoVolador()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaBichoVolador::BeginPlay()
{
		Super::BeginPlay();
}

void ANaveEnemigaBichoVolador::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

void ANaveEnemigaBichoVolador::Mover(float DeltaTime)
{

}

void ANaveEnemigaBichoVolador::Disparar()
{
}

void ANaveEnemigaBichoVolador::Atacar()
{
}

void ANaveEnemigaBichoVolador::Escapar()
{
}


