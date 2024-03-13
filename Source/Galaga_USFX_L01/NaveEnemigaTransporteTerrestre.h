// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteTerrestre : public ANaveEnemigaTransporte
{
	GENERATED_BODY()

private:
	int cargamento;

public:
	ANaveEnemigaTransporteTerrestre();

	FORCEINLINE int GetCargamento() const {return cargamento;}
	FORCEINLINE void SetCargamento(int value) {cargamento = value;}
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Atacar();
	virtual void Escapar();

	
};
