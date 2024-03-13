// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteTerrestre.h"

ANaveEnemigaTransporteTerrestre::ANaveEnemigaTransporteTerrestre()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);


}

void ANaveEnemigaTransporteTerrestre::Mover()
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
