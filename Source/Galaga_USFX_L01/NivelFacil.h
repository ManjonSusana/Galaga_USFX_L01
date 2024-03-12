// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nivel.h"
#include "NivelFacil.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANivelFacil : public ANivel
{
	GENERATED_BODY()

private:
	int facil;

public:
	ANivelFacil();
	FORCEINLINE int GetFacil() const { return facil; }
	FORCEINLINE void SetFacil(int _facil) { facil = _facil; }
	
protected:
	virtual void dificultad();



};
