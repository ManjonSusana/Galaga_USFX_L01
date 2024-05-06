// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasMotor.h"
#include "Engine/CollisionProfile.h"

ACapsulasMotor::ACapsulasMotor()
{
	PrimaryActorTick.bCanEverTick = true;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
		if (MeshAsset.Object != nullptr)
		{
			GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
			GetStaticMeshComponent()->SetCollisionProfileName(
			UCollisionProfile::Pawn_ProfileName);
		}
		GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
		SetActorEnableCollision(true);
}

void ACapsulasMotor::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void ACapsulasMotor::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}
