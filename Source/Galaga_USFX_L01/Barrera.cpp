// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera.h"
#include "Components/BoxComponent.h"
#include "ProyectilEnemigo.h"

// Sets default values
ABarrera::ABarrera() 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaBarrera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBarrera")); //creamos la malla de la barrera
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	mallaBarrera->SetStaticMesh(ShipMesh.Object);

	RootComponent = mallaBarrera;
	mallaBarrera->SetWorldScale3D(FVector(1.5f, 1.5f, 1.5f));
	//COMPONENETE DE COLISION
	colision_BARRERA = CreateDefaultSubobject<UBoxComponent>(TEXT("ColisionBarrera")); //creamos la colision de la barrera
	colision_BARRERA->SetWorldScale3D(FVector(10.5f, 10.5f, 10.5f)); //escala de la colision
	colision_BARRERA->SetupAttachment(RootComponent); //la colision se adjunta a la raiz
	

}

// Called when the game starts or when spawned
void ABarrera::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Barrera Creada")); //mensaje de depuracion
	
}

// Called every frame
void ABarrera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABarrera::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AProyectilEnemigo* ProyectilEnemigo = Cast<AProyectilEnemigo>(Other);
	if (ProyectilEnemigo)
	{
		// Destruir la barrera
		//Destroy();

		 // Reducir la salud de la barrera
		resistencia -= ProyectilEnemigo->GetDano(); // Reduce la salud según el daño del proyectil enemigo
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Barrera Creada")); //mensaje de depuracion
		// Verificar si la salud de la barrera es menor o igual a cero
		if (resistencia <= 0)
		{
			// Si la salud es menor o igual a cero, destruir la barrera
			DestruirBarrera();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Barrera Creada")); //mensaje de depuracion
		}
	}
}
void ABarrera::DestruirBarrera()
{
	Destroy();
}

