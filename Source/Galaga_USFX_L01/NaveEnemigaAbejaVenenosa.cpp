// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAbejaVenenosa.h"

ANaveEnemigaAbejaVenenosa::ANaveEnemigaAbejaVenenosa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaAbejaVenenosa::BeginPlay()
{
}

void ANaveEnemigaAbejaVenenosa::Tick(float DeltaTime)
{
}

void ANaveEnemigaAbejaVenenosa::Mover()
{
}

void ANaveEnemigaAbejaVenenosa::Disparar()
{
}

void ANaveEnemigaAbejaVenenosa::Atacar()
{
}

void ANaveEnemigaAbejaVenenosa::Escapar()
{
}
