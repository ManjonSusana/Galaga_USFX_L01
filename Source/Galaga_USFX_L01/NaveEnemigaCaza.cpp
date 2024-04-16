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
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;
	
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

	FireRate = rand() % 4 + 1;

	MaxShots = 5;//maximo de disparos
	ShotsFired = 0;//disparos realizados

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
	Mover(DeltaTime);
	//Disparar();
	Desplazamiento();

	TiempoTranscurrido++;
	if (TiempoTranscurrido > 300) {
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector PosicionProyectilEnemigo = GetActorLocation()+ FVector(0.0f, 0.0f, 0.0f);
			World -> SpawnActor <AProyectilEnemigo>(PosicionProyectilEnemigo, FRotator::ZeroRotator); //spawneo proyectil
		}
		TiempoTranscurrido = 0;

	}
}


void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	velocidad = 0.8; 
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));

	if (GetActorLocation().X < LimiteInferiorX)
	{
		Desplazamiento();
		//SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, 250.0f));
		SetActorLocation(FVector(1000.0f, GetActorLocation().Y, 250.0f));
	}
}
void ANaveEnemigaCaza::Disparar()
{
}
void ANaveEnemigaCaza::ShotTimerExpired() //metodo para controlar el tiempo de disparo
{
	bCanFire = true; //puede disparar
}
void ANaveEnemigaCaza::Desplazamiento()
{ 
	AmplitudZigZag = 3.0f; //amplitud del movimiento zigzag
	VelocidadZigZag = 1.0f; //velocidad del movimiento zigzag
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y + AmplitudZigZag * FMath::Sin(VelocidadZigZag * TiempoTranscurrido), GetActorLocation().Z)); //establece la posicion de la nave
	
}

void ANaveEnemigaCaza::Escapar()
{
}
