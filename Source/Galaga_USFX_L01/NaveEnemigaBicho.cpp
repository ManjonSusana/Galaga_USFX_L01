// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBicho.h"
#include "Galaga_USFX_L01Projectile.h"
#include "Galaga_USFX_L01GameMode.h"
#include "ProyectilEnemigo.h"
#include "Kismet/GameplayStatics.h" 


// Sets default values
ANaveEnemigaBicho::ANaveEnemigaBicho()
{	
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/MALLAS/0e61880366e0_enemigos_del_juego_.0e61880366e0_enemigos_del_juego_'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

	bCanFire = false;//puede disparar

	TiempoTranscurrido = 0.0f; //tiempo transcurrido

}

// Called when the game starts or when spawned
void ANaveEnemigaBicho::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveEnemigaBicho::Tick(float DeltaTime)
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
