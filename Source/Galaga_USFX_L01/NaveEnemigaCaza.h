// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	int cantidadBombas;

	uint32 bCanFire : 1;// Variable para controlar el tiempo de disparo
	float FireRate; // Velocidad de disparo

	int MaxShots; // Maximo de disparos
	int ShotsFired; // Disparos realizados

	float AmplitudZigZag; // Amplitud del movimiento zigzag
	float VelocidadZigZag; // Velocidad del movimiento zigzag

	int TiempoTranscurrido; // Tiempo transcurrido para el disparo
public:
	class USoundBase* FireSound;// Sonido de disparo

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int cantidad) { cantidadBombas = cantidad; }

	FORCEINLINE float Getvelocidad() const { return velocidad; }
	FORCEINLINE void Setvelocidad(float _velocidad) { velocidad = _velocidad; }

	FORCEINLINE float GetVelocidadZigZag() const { return VelocidadZigZag; } // Metodo para obtener la velocidad del movimiento zigzag
	FORCEINLINE void SetVelocidadZigZag(float _velocidadZigZag) { VelocidadZigZag = _velocidadZigZag; } // Metodo para establecer la velocidad del movimiento zigzag



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ShotTimerExpired(); // Metodo para controlar el tiempo de disparo

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar(); // metodo para disparar
	virtual void Escapar();
	FTimerHandle TimerHandle_ShotTimerExpired;
	virtual void Desplazamiento();	

};
