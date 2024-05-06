// Fill out your copyright notice in the Description page of Project Settings.


#include "VidaNave.h"
#include "NaveMejoras.h"

// Sets default values
AVidaNave::AVidaNave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVidaNave::BeginPlay()
{
	Super::BeginPlay();

	

}

// Called every frame
void AVidaNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVidaNave::builNaveMejoras(FVector ubicacionNaveMejoras)
{
	NaveMejoras = GetWorld()->SpawnActor<ANaveMejoras>(ANaveMejoras::StaticClass(), ubicacionNaveMejoras, FRotator::ZeroRotator);
	NaveMejoras->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

void AVidaNave::buildVidaNave()
{
	if (!NaveMejoras) {UE_LOG(LogTemp, Error, TEXT("BuildSwimmingPool():Lodging is NULL, make sure it's initialized.")); return; }
	NaveMejoras->SetVidaNave("VidaNave");
}

void AVidaNave::buildMotorNave()
{
	/*if (!NaveMejoras) { UE_LOG(LogTemp, Error, TEXT("BuildSwimmingPool():Lodging is NULL, make sure it's initialized.")); return; }
	NaveMejoras->SetMotorNave("MotorNave");*/
}

void AVidaNave::buildArmaNave()
{
	/*if (!NaveMejoras) { UE_LOG(LogTemp, Error, TEXT("BuildSwimmingPool():Lodging is NULL, make sure it's initialized.")); return; }
	NaveMejoras->SetArmaNave("ArmaNave");*/

}

void AVidaNave::buildMallaNave()
{
	NaveMejoras->MallaNave->SetStaticMesh(VidaNave);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("VidaNave"));
}

ANaveMejoras* AVidaNave::getNaveMejoras()
{
	return NaveMejoras;
}

