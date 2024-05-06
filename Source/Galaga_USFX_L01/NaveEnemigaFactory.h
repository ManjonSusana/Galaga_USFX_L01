// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaFactory.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaFactory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaFactory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

<<<<<<< HEAD
=======

>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
	//creando naves con el metodo CrearNave

	static ANaveEnemiga* CrearNave(FString nave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);

};
