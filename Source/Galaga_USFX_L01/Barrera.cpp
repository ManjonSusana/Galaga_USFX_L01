// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera.h"
#include "Components/BoxComponent.h"
#include "ProyectilEnemigo.h"

void ABarrera::DestruirBarrera()
{
	Destroy();
}
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
	colision_BARRERA = CreateDefaultSubobject<UBoxComponent>(TEXT("ColisionBarrera"));
	colision_BARRERA->SetWorldScale3D(FVector(10.5f, 10.5f, 10.5f));
	colision_BARRERA->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void ABarrera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarrera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarrera::NotifyActorBeginOverlap(AActor* OtherActor) //cuando algo colisiona con la barrera
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Verificar si el actor que colisiona es un proyectil enemigo
	AProyectilEnemigo* ProyectilEnemigo = Cast<AProyectilEnemigo>(OtherActor);
	if (ProyectilEnemigo)
	{
		// Destruir la barrera
		Destroy();
	}
	
}

void ABarrera::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	

}


