// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilEnemigo : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProyectilEnemyMesh;
	int dano;                 //Dano que hace el proyectil a la nave
	float velocidad;		  //Velocidad del proyectil enemigo
	float direccion;		  //Direccion del proyectil enemigo

public:
	FORCEINLINE int GetDano() const { return dano; }               //Metodo para obtener el dano del proyectil
	FORCEINLINE float GetVelocidad() const { return velocidad; }   //Metodo para obtener la velocidad del proyectil
	FORCEINLINE float GetDireccion() const { return direccion; }   //Metodo para obtener la direccion del proyectil

	FORCEINLINE void SetDano(int _dano) { dano = _dano; }                         //Metodo para establecer el dano del proyectil
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }   //Metodo para establecer la velocidad del proyectil
	FORCEINLINE void SetDireccion(float _direccion) { direccion = _direccion; }  //Metodo para establecer la direccion del proyectil

	void MovimientoProyectil();  //Metodo para mover el proyectil enemigo
	void Impacto();			  //Metodo para detectar el impacto del proyectil enemigo
	void ProyectilEnemigo();	  //Constructor de la clase
public:	
	// Sets default values for this actor's properties
	AProyectilEnemigo(); //Constructor de la clase



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Mover();
};
