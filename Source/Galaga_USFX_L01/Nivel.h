// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANivel : public AActor
{
	GENERATED_BODY()

private:
	int numeroNivel;
	int dificultad;
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

	void setDificultad(int dificultad);
	int getDificultad();

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
	~ANivel();
	ANivel(int numeroNivel, int dificultad, int duracionNivel, int actualizarNivel, int iniciarNivel, int reiniciarNivel, int finalizarNivel, int pausarNivel, int reanudarNivel);
	ANivel(int numeroNivel, int dificultad, int duracionNivel, int actualizarNivel, int iniciarNivel, int reiniciarNivel, int finalizarNivel, int pausarNivel, int reanudarNivel, FVector posicion, FRotator rotacion, FVector escala);
	ANivel(int numeroNivel, int dificultad, int duracionNivel, int actualizarNivel, int iniciarNivel, int reiniciarNivel, int finalizarNivel, int pausarNivel, int reanudarNivel, FVector posicion, FRotator rotacion, FVector escala, UStaticMeshComponent* mesh);
	ANivel(int numeroNivel, int dificultad, int duracionNivel, int actualizarNivel, int iniciarNivel, int reiniciarNivel, int finalizarNivel, int pausarNivel, int reanudarNivel, FVector posicion, FRotator rotacion, FVector escala, UStaticMeshComponent* mesh, UMaterial* material);
	ANivel(int numeroNivel, int dificultad, int duracionNivel, int actualizarNivel, int iniciarNivel, int reiniciarNivel, int finalizarNivel, int pausarNivel, int reanudarNivel, FVector posicion, FRotator rotacion, FVector escala, UStaticMeshComponent* mesh, UMaterial* material, UMaterial* material2);

	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
