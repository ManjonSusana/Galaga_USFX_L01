// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
#include "Galaga_USFX_L01Projectile.h"
#include "Galaga_USFX_L01GameMode.h"
#include "ProyectilEnemigo.h"
#include "Kismet/GameplayStatics.h" 

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/MALLAS/7b185327159f_nave_transporte_gal.7b185327159f_nave_transporte_gal'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));
}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	//Disparar();
	Desplazamiento();
	//Realizar el disparo del proyectil 
	TiempoTranscurrido++;
	if (TiempoTranscurrido > 300) {
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector PosicionProyectilEnemigo = GetActorLocation() + FVector(0.0f, 0.0f, 0.0f);
			World->SpawnActor <AProyectilEnemigo>(PosicionProyectilEnemigo, FRotator::ZeroRotator); //spawneo proyectil
		}
		TiempoTranscurrido = 0;

	}
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	velocidad = 0.65; //0.75
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));

	if (GetActorLocation().X < LimiteInferiorX)
	{
		Desplazamiento();
		//SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, 250.0f));
		SetActorLocation(FVector(16000.f, GetActorLocation().Y, 250.0f));
	}
}


void ANaveEnemigaTransporte::Disparar()
{
}

void ANaveEnemigaTransporte::Atacar()
{
}

void ANaveEnemigaTransporte::Escapar()
{
}

void ANaveEnemigaTransporte::Desplazamiento()
{
}
