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
void AProyectilEnemigo::Impacto()
{
}

void AProyectilEnemigo::ProyectilEnemigo()
{
}
// Sets default values
AProyectilEnemigo::AProyectilEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	ProyectilEnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0")); //CREA EL MESH
	ProyectilEnemyMesh->SetStaticMesh(ProjectileMeshAsset.Object); //HACE REFERENCIA AL MESH
	ProyectilEnemyMesh->SetupAttachment(RootComponent);

	velocidad = 1000;
	dano = 10;
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

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
}
void AProyectilEnemigo::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}

