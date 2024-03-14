// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaBicho.h"
#include "NaveEnemigaBichoVolador.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaBichoVolador : public ANaveEnemigaBicho
{
	GENERATED_BODY()
private:
	int danioGranada;

public:

	ANaveEnemigaBichoVolador();
	FORCEINLINE int GetDanioGranada() const { return danioGranada; }
	FORCEINLINE void SetDanioGranada(int _danio) { danioGranada = _danio; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Atacar();
	virtual void Escapar();

};
