// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaDisparos.h"

ANaveEnemigaCazaDisparos::ANaveEnemigaCazaDisparos()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaCazaDisparos::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaCazaDisparos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ANaveEnemigaCazaDisparos::Mover(float DeltaTime)
{
}

void ANaveEnemigaCazaDisparos::Disparar()
{
}

void ANaveEnemigaCazaDisparos::Atacar()
{
}

void ANaveEnemigaCazaDisparos::Escapar()
{
}
