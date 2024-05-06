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

	uint32 bCanFire : 1;// Variable para controlar el tiempo de disparo
	float FireRate; // Velocidad de disparo

	int TiempoTranscurrido;

public:
		ANaveEnemigaBicho();
		FORCEINLINE int GetCaniones() const { return caniones; }
		FORCEINLINE void SetCaniones(int cantidad) { caniones = cantidad; }
	

		FORCEINLINE float Getvelocidad() const { return velocidad; }
		FORCEINLINE void Setvelocidad(float _velocidad) { velocidad = _velocidad; }

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
	FTimerHandle TimerHandle_ShotTimerExpired; // Timer para controlar el tiempo de disparo

	virtual void Escapar();

};
