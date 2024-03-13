// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaMariposa.h"

// Sets default values
ANaveEnemigaMariposa::ANaveEnemigaMariposa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);


}

// Called when the game starts or when spawned
void ANaveEnemigaMariposa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaMariposa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigaMariposa::Mover()
{
}

void ANaveEnemigaMariposa::Disparar()
{
}

void ANaveEnemigaMariposa::Atacar()
{
}

void ANaveEnemigaMariposa::Escapar()
{
}

