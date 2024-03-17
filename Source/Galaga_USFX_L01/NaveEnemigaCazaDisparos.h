// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaDisparos.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaDisparos : public ANaveEnemigaCaza
{
	GENERATED_BODY()

private:
	int bombas;

public:
	ANaveEnemigaCazaDisparos();
	FORCEINLINE int GetFlecha() const { return bombas; }
	FORCEINLINE void SetFlecha(int _bombas) { bombas = _bombas; }

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
