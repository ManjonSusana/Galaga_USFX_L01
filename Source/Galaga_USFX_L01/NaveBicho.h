// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveBicho.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveBicho : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int cantidadDisparos;
	
	float tiempoDisparo;
public:
	FORCEINLINE int GetCantidadDisparos() const { return cantidadDisparos; }
	
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }

	FORCEINLINE void SetCantidadDisparos(int cantidad) { cantidadDisparos = cantidad; }
	
	FORCEINLINE void SetTiempoDisparo(float tiempo) { tiempoDisparo = tiempo; }
	
};
