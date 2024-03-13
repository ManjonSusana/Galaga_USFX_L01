// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaAbeja.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaAbeja : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int caniones;

public:


	ANaveEnemigaAbeja();
	FORCEINLINE int GetCaniones() const { return caniones; }
	FORCEINLINE void SetCaniones(int cantidad) {caniones = cantidad;}


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:

	virtual void Mover();
	virtual void Disparar();
	virtual void Atacar();
	virtual void Escapar();

};
