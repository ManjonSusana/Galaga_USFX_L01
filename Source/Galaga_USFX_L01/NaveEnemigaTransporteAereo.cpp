// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteAereo.h"

ANaveEnemigaTransporteAereo::ANaveEnemigaTransporteAereo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaTransporteAereo::Mover()
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
