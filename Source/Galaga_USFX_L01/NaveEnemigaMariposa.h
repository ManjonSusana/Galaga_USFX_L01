// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaMariposa.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaMariposa : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int numeroAlas;
	

public:
	ANaveEnemigaMariposa();
	FORCEINLINE int GetNumeroAlas() const { return numeroAlas; }
	//FORCEINLINE float GetLongitudAlas() const { return longitudAlas; }

	FORCEINLINE void SetNumeroAlas(int numero) { numeroAlas = numero; }
	//FORCEINLINE void SetLongitudAlas(float longitud) { longitudAlas = longitud; }
	

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
