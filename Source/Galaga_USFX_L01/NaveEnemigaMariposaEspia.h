// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaMariposa.h"
#include "NaveEnemigaMariposaEspia.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaMariposaEspia : public ANaveEnemigaMariposa
{
	GENERATED_BODY()

private:
	int invisible;
	int tiempoInvisible;

public:
	ANaveEnemigaMariposaEspia();
	FORCEINLINE int GetInvisible() const { return invisible; }
	FORCEINLINE int GetTiempoInvisible() const { return tiempoInvisible; }

	FORCEINLINE void SetInvisible(int _invisible) { invisible = _invisible; }
	FORCEINLINE void SetTiempoInvisible(int _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }

			
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
