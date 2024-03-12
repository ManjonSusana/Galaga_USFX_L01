// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAbejaVenenosa.h"

ANaveEnemigaAbejaVenenosa::ANaveEnemigaAbejaVenenosa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaAbejaVenenosa::BeginPlay()
{
}

void ANaveEnemigaAbejaVenenosa::Tick(float DeltaTime)
{
}
