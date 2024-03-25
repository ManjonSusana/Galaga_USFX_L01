// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBicho.h"

// Sets default values
ANaveEnemigaBicho::ANaveEnemigaBicho()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/MALLAS/0e61880366e0_enemigos_del_juego_.0e61880366e0_enemigos_del_juego_'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

}

// Called when the game starts or when spawned
void ANaveEnemigaBicho::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveEnemigaBicho::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
}

void ANaveEnemigaBicho::Mover(float DeltaTime)
{
	//velocidad = 300.0f;
	//SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaBicho::Disparar()
{
}

void ANaveEnemigaBicho::Atacar()
{
}

void ANaveEnemigaBicho::Escapar()
{
}
