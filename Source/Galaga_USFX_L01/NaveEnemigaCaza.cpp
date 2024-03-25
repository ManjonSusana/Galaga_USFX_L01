// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/MALLAS/269dafead173_nave_super_espacial.269dafead173_nave_super_espacial'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

}

void ANaveEnemigaCaza::BeginPlay()
{
		Super::BeginPlay(); 
		
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
}


void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	//velocidad = 300.0f;
	//SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));

}

void ANaveEnemigaCaza::Disparar()
{

}

void ANaveEnemigaCaza::Atacar()
{
}

void ANaveEnemigaCaza::Escapar()
{
}
