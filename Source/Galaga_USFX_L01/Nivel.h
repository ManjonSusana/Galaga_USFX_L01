// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.generated.h"

UCLASS(abstract)
class GALAGA_USFX_L01_API ANivel : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNivel;


private:
	int numeroNivel;
	int duracionNivel;
	int actualizarNivel;
	int iniciarNivel;
	int reiniciarNivel;
	int finalizarNivel;
	int pausarNivel;
	int reanudarNivel;

public:
	void setNumeroNivel(int numeroNivel);
	int getNumeroNivel();

	void setDuracionNivel(int duracionNivel);
	int getDuracionNivel();

	void setActualizarNivel(int actualizarNivel);
	int getActualizarNivel();

	void setIniciarNivel(int iniciarNivel);
	int getIniciarNivel();

	void setReiniciarNivel(int reiniciarNivel);
	int getReiniciarNivel();

	void setFinalizarNivel(int finalizarNivel);
	int getFinalizarNivel();

	void setPausarNivel(int pausarNivel);
	int getPausarNivel();

	void setReanudarNivel(int reanudarNivel);
	int getReanudarNivel();

	ANivel();
	
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



protected:  //CLASE ABSTRACTA
	virtual void dificultad() PURE_VIRTUAL(ANivel::dificultad, );

};
