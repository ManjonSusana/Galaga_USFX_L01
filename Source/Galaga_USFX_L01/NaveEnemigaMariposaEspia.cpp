// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaMariposaEspia.h"

ANaveEnemigaMariposaEspia::ANaveEnemigaMariposaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaMariposaEspia::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaMariposaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaMariposaEspia::Mover(float DeltaTime)
{
}

void ANaveEnemigaMariposaEspia::Disparar()
{
}

void ANaveEnemigaMariposaEspia::Atacar()
{
}

void ANaveEnemigaMariposaEspia::Escapar()
{
}
