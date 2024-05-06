// Fill out your copyright notice in the Description page of Project Settings.


#include "SuperNave.h"
#include "NaveMejoras.h"

// Sets default values
ASuperNave::ASuperNave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void ASuperNave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuperNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASuperNave::builNaveMejoras(FVector ubicacionNaveMejoras)
{
	NaveMejoras = GetWorld()->SpawnActor<ANaveMejoras>(ANaveMejoras::StaticClass(), ubicacionNaveMejoras, FRotator::ZeroRotator);
	NaveMejoras->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

	
}

void ASuperNave::buildVidaNave()
{
	if (!NaveMejoras) { UE_LOG(LogTemp, Error, TEXT("BuildSwimmingPool():Lodging is NULL, make sure it's initialized.")); return; }
	NaveMejoras->SetVidaNave("VidaNave");
}

void ASuperNave::buildMotorNave()
{
	if (!NaveMejoras) { UE_LOG(LogTemp, Error, TEXT("BuildSwimmingPool():Lodging is NULL, make sure it's initialized.")); return; }
	NaveMejoras->SetMotorNave("MotorNave");
}

void ASuperNave::buildArmaNave()
{
	if (!NaveMejoras) { UE_LOG(LogTemp, Error, TEXT("BuildSwimmingPool():Lodging is NULL, make sure it's initialized.")); return; }
	NaveMejoras->SetArmaNave("ArmaNave");
}

void ASuperNave::buildMallaNave()
{
	NaveMejoras->MallaNave->SetStaticMesh(SuperNave);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SuperNave"));
}

ANaveMejoras* ASuperNave::getNaveMejoras()
{
	return NaveMejoras;
}

