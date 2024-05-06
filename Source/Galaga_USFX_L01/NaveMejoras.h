// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoNaves.h"
#include "ComponenteMovimiento.h"
#include "NaveMejoras.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveMejoras : public AActor, public IPlanoNaves
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveMejoras();
private:
	UPROPERTY(VisibleAnywhere, Category = "VidaNave")
	FString VidaNave;
	UPROPERTY(VisibleAnywhere, Category = "MotorNave")
	FString VelocidadNave;
	UPROPERTY(VisibleAnywhere, Category = "ArmaNave")
	FString ArmaNave;

	bool Verificacion = false;
	bool VerificacionArma = false;

	float TiempoTranscurrido = 0;

private:
	class ACapsulasMotor* CapsulasMotor01;
	class ACapsulaArma* CapsulaArma01;
public:
	UPROPERTY(VisibleAnywhere, Category = "MallaNave") //MALLA NAVEMEJORAS
	UStaticMeshComponent* MallaNave;

	// Declaración del componente de movimiento de naves
	UComponenteMovimiento* MovimientoNavesComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual void SetNaveMejoras() override;
	virtual void SetVidaNave(FString NewVidaNave) override;
	virtual void SetMotorNave(FString NewVelocidadNave) override;
	virtual void SetArmaNave(FString NewArmaNave) override;
	virtual void SetMalla(UStaticMeshComponent* NewMallaNave) override;


	void CaracteristicasNave();

};
//casteo es un proceso de convertir un tipo de dato a otro
//tick es un proceso que se ejecuta en cada frame
//BeginPlay es un proceso que se ejecuta al iniciar el juego