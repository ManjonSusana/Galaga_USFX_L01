// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaMariposaAsesina.h"

ANaveEnemigaMariposaAsesina::ANaveEnemigaMariposaAsesina()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaMariposaAsesina::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaMariposaAsesina::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

void ANaveEnemigaMariposaAsesina::Mover()
{
}

void ANaveEnemigaMariposaAsesina::Disparar()
{
}

void ANaveEnemigaMariposaAsesina::Atacar()
{
}

void ANaveEnemigaMariposaAsesina::Escapar()
{
}
