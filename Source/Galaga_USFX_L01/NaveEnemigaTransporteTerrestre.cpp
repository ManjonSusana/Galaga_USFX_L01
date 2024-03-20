// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteTerrestre.h"

ANaveEnemigaTransporteTerrestre::ANaveEnemigaTransporteTerrestre()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);


}

void ANaveEnemigaTransporteTerrestre::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporteTerrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaTransporteTerrestre::Mover(float DeltaTime)
{
}

void ANaveEnemigaTransporteTerrestre::Disparar()
{
}

void ANaveEnemigaTransporteTerrestre::Atacar()
{
}

void ANaveEnemigaTransporteTerrestre::Escapar()
{
}
