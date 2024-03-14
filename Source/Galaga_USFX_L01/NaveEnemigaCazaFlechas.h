// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaFlechas.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaFlechas : public ANaveEnemigaCaza
{
	GENERATED_BODY()

private:
	int flecha;

public:
	 ANaveEnemigaCazaFlechas();
	FORCEINLINE int GetFlecha() const { return flecha; }
	FORCEINLINE void SetFlecha(int _flecha) { flecha = _flecha; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Atacar();
	virtual void Escapar();


};

