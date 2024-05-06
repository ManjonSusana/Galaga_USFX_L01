// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo.h"
#include"NaveEnemiga.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

void AProyectilEnemigo::MovimientoProyectil()
{
}
<<<<<<< HEAD
=======

>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
void AProyectilEnemigo::Impacto()
{
}

void AProyectilEnemigo::ProyectilEnemigo()
{
}
<<<<<<< HEAD
=======

>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
// Sets default values
AProyectilEnemigo::AProyectilEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
	//mallaBarrera->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ProyectilEnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0")); //CREA EL MESH
	ProyectilEnemyMesh->SetStaticMesh(ProjectileMeshAsset.Object); //HACE REFERENCIA AL MESH
	ProyectilEnemyMesh->SetupAttachment(RootComponent);

<<<<<<< HEAD
	ProyectilEnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0")); //CREA EL MESH
	ProyectilEnemyMesh->SetStaticMesh(ProjectileMeshAsset.Object); //HACE REFERENCIA AL MESH
	ProyectilEnemyMesh->SetupAttachment(RootComponent);

	velocidad = 1000;
	dano = 10;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

=======
	velocidad = 1000;
	dano = 10;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(0.1f, 0.1f, 0.1f));
>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
}

// Called when the game starts or when spawned
void AProyectilEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();
<<<<<<< HEAD
}
void AProyectilEnemigo::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
=======

>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
}

void AProyectilEnemigo::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}


