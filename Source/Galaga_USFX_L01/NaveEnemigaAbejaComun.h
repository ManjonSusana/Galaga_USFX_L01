// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaAbeja.h"
#include "NaveEnemigaAbejaComun.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaAbejaComun : public ANaveEnemigaAbeja
{
	GENERATED_BODY()

private:
	int danioAguijon;

public:

	ANaveEnemigaAbejaComun();
	FORCEINLINE int GetDanioAguijon() const { return danioAguijon; }
	FORCEINLINE void SetDanioAguijon(int danio) { danioAguijon = danio; }

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
