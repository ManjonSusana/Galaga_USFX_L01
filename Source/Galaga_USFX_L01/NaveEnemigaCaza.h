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

<<<<<<< HEAD
	int TiempoTranscurrido;
=======
	int MaxShots; // Maximo de disparos
	int ShotsFired; // Disparos realizados

	float AmplitudZigZag; // Amplitud del movimiento zigzag
	float VelocidadZigZag; // Velocidad del movimiento zigzag

	int TiempoTranscurrido; // Tiempo transcurrido para el disparo
public:
	class USoundBase* FireSound;// Sonido de disparo
>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int cantidad) { cantidadBombas = cantidad; }

	FORCEINLINE float Getvelocidad() const { return velocidad; }
	FORCEINLINE void Setvelocidad(float _velocidad) { velocidad = _velocidad; }

<<<<<<< HEAD
=======
	FORCEINLINE float GetVelocidadZigZag() const { return VelocidadZigZag; } // Metodo para obtener la velocidad del movimiento zigzag
	FORCEINLINE void SetVelocidadZigZag(float _velocidadZigZag) { VelocidadZigZag = _velocidadZigZag; } // Metodo para establecer la velocidad del movimiento zigzag


>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//virtual void ShotTimerExpired(); // Metodo para controlar el tiempo de disparo

protected:
	virtual void Mover(float DeltaTime);
<<<<<<< HEAD
	virtual void Disparar();
	virtual void Atacar();
	FTimerHandle TimerHandle_ShotTimerExpired; // Timer para controlar el tiempo de disparo
=======
	virtual void Disparar(); // metodo para disparar
>>>>>>> f0bb4bf00fa9a004cf21cec808d61b923c834097
	virtual void Escapar();
	FTimerHandle TimerHandle_ShotTimerExpired; // Timer para controlar el tiempo de disparo
	virtual void Desplazamiento();	// Metodo para el desplazamiento de la nave

};
