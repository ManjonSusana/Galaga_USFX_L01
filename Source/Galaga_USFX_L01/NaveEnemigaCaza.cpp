// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Galaga_USFX_L01Projectile.h"
#include "Galaga_USFX_L01GameMode.h"
#include "ProyectilEnemigo.h"
#include "Kismet/GameplayStatics.h" 

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/MALLAS/269dafead173_nave_super_espacial.269dafead173_nave_super_espacial'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

	bCanFire = false;//puede disparar

	TiempoTranscurrido = 0.0f; //tiempo transcurrido

}

void ANaveEnemigaCaza::BeginPlay()
{
		Super::BeginPlay(); 
		
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
	//Disparos

	TiempoTranscurrido++;
	if (TiempoTranscurrido > 300) {
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector PosicionProyectilEnemigo = GetActorLocation() + FVector(0.0f, 0.0f, 0.0f); //posicion del proyectil enemigo
			World->SpawnActor <AProyectilEnemigo>(PosicionProyectilEnemigo, FRotator::ZeroRotator); //spawneo proyectil
		}
		TiempoTranscurrido = 0;

	}
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
