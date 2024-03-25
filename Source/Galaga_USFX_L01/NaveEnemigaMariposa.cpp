// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaMariposa.h"

// Sets default values
ANaveEnemigaMariposa::ANaveEnemigaMariposa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/MALLAS/0fcbbf768755_necesito_una_maripo.0fcbbf768755_necesito_una_maripo'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

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

void ANaveEnemigaMariposa::Mover(float DeltaTime)
{
	//velocidad = 300.0f; // ir cambiando velocidades
	//SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
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

