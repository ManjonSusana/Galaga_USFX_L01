// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteAereo.h"

ANaveEnemigaTransporteAereo::ANaveEnemigaTransporteAereo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaTransporteAereo::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporteAereo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaTransporteAereo::Mover(float DeltaTime)
{
}

void ANaveEnemigaTransporteAereo::Disparar()
{
}

void ANaveEnemigaTransporteAereo::Atacar()
{
}

void ANaveEnemigaTransporteAereo::Escapar()
{
}
