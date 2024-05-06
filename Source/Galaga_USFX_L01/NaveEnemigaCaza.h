// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int cantidadBombas;

	uint32 bCanFire : 1;// Variable para controlar el tiempo de disparo
	float FireRate; // Velocidad de disparo

	int TiempoTranscurrido;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int cantidad) { cantidadBombas = cantidad; }

	FORCEINLINE float Getvelocidad() const { return velocidad; }
	FORCEINLINE void Setvelocidad(float _velocidad) { velocidad = _velocidad; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	// Velocidad de la nave de caza
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Velocidad = 500.0f;

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
