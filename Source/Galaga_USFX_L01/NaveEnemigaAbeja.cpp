// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAbeja.h"

// Sets default values
ANaveEnemigaAbeja::ANaveEnemigaAbeja()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/MALLAS/c3bc960d8210_navee_enemiga_ABEJA.c3bc960d8210_navee_enemiga_ABEJA'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

}

// Called when the game starts or when spawned
void ANaveEnemigaAbeja::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaAbeja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ANaveEnemigaAbeja::Mover(float DeltaTime)
{
	//velocidad = 300.0f;
	//SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaAbeja::Disparar()
{
}

void ANaveEnemigaAbeja::Atacar()
{
}

void ANaveEnemigaAbeja::Escapar()
{
}

