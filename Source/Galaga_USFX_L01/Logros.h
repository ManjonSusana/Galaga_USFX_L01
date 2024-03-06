// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Logros.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ALogros : public AActor
{
	GENERATED_BODY()
private:
	int puntos;
	int vidas;
	int nivel;

public:
	FORCEINLINE int GetPuntos() const { return puntos; }
	FORCEINLINE int GetVidas() const { return vidas; }
	FORCEINLINE int GetNivel() const { return nivel; }

	FORCEINLINE void SetPuntos(int _puntos) { puntos = _puntos; }
	FORCEINLINE void SetVidas(int _vidas) { vidas = _vidas; }
	FORCEINLINE void SetNivel(int _nivel) { nivel = _nivel; }
	
public:	
	// Sets default values for this actor's properties
	ALogros();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
