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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Atacar();
	virtual void Escapar();


};

