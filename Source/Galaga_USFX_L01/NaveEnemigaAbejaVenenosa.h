// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaAbeja.h"
#include "NaveEnemigaAbejaVenenosa.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaAbejaVenenosa : public ANaveEnemigaAbeja
{
	GENERATED_BODY()

private:
	int danioVeneno;

public:
	ANaveEnemigaAbejaVenenosa();
	FORCEINLINE int GetDanioVeneno() const { return danioVeneno; }
	FORCEINLINE void SetDanioVeneno(int cantidad) { danioVeneno = cantidad; }
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
