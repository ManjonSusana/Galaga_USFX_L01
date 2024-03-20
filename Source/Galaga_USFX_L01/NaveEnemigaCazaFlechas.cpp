// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaFlechas.h"

ANaveEnemigaCazaFlechas::ANaveEnemigaCazaFlechas()
{
		static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
		mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaCazaFlechas::BeginPlay()
{
	Super::BeginPlay();
	

}

void ANaveEnemigaCazaFlechas::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
	
}


void ANaveEnemigaCazaFlechas::Mover(float DeltaTime)
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
