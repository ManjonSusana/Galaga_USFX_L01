// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaAbeja.h"
#include "NaveEnemigaAbejaVenenosa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaAbejaVenenosa : public ANaveEnemigaAbeja
{
	GENERATED_BODY()

private:
	int lanzaveneno;

public:
	ANaveEnemigaAbejaVenenosa();
	FORCEINLINE int GetLanzaVeneno() const { return lanzaveneno; }
	FORCEINLINE void SetLanzaVeneno(int cantidad) { lanzaveneno = cantidad; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;




};
