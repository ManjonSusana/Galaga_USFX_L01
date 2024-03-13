// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteAereo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteAereo : public ANaveEnemigaTransporte
{
	GENERATED_BODY()

private:
	int cargamento;

public:

	ANaveEnemigaTransporteAereo();

	FORCEINLINE int GetCargamento() const { return cargamento; }
	FORCEINLINE void SetCargamento(int _value) { cargamento = _value;}

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Atacar();
	virtual void Escapar();

	
};
