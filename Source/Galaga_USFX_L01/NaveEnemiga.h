// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS(abstract)
class GALAGA_USFX_L01_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true")) //
	UStaticMeshComponent* mallaNaveEnemiga;   //malla 

protected:
	float velocidad;    //VELOCIDAD DE MOVIMIENTO DE LA NAVE
	float resistencia;    //NUMERO DE DISPAROS QUE RECIBE
	FString nombre;
	float danoProducido;   //Potencia de cada proyectil de disparo de nave
	float tiempoDisparo;    //Tiempo que trnacurre entre cada disparo
	FVector posicion;
	int trayectoria; //cada valor numerico representa a una fucnion que la nave debe asumir para moverse
	int caoacidadMunicion;
	int tipoNave;
	float experiencia;
	float energia;

	float LimiteInferiorX; // Limites de movimiento de las naves
	float LimiteInferiorY; // Limites de movimiento de las naves
	
public:

	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE int GetCapacidadMunicion() const { return caoacidadMunicion; }
	FORCEINLINE int GetTipoNave() const { return tipoNave; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetEnergia() const { return energia; }



	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetCapacidadMunicion(int _caoacidadMunicion) { caoacidadMunicion = _caoacidadMunicion; }
	FORCEINLINE void SetTipoNave(int _tipoNave) { tipoNave = _tipoNave; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }

public:
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:  //creacion clase abstracta 
	//virtual void Mover() = 0: 
	//metodos para implementar en las clases hijas
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );
	void Escapar() PURE_VIRTUAL(ANaveEnemiga::Escapar, );
	void Desplazamiento() PURE_VIRTUAL(ANaveEnemiga::Desplazamiento, ); //
	//void Desplazamiento() PURE_VIRTUAL(ANaveEnemiga::Desplazamiento, );
};