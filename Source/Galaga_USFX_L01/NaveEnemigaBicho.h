// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaBicho.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaBicho : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int caniones;

public:
		ANaveEnemigaBicho();
		FORCEINLINE int GetCaniones() const { return caniones; }
		FORCEINLINE void SetCaniones(int cantidad) { caniones = cantidad; }
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Atacar();
	virtual void Escapar();

};
