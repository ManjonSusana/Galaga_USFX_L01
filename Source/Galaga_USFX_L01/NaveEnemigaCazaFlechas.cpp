// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaFlechas.h"

ANaveEnemigaCazaFlechas::ANaveEnemigaCazaFlechas()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaCazaFlechas::Mover()
{
}

void ANaveEnemigaCazaFlechas::Disparar()
{
}

void ANaveEnemigaCazaFlechas::Atacar()
{
}

void ANaveEnemigaCazaFlechas::Escapar()
{
}
