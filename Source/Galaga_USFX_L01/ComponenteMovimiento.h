// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteMovimiento.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UComponenteMovimiento : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteMovimiento();

	UPROPERTY()
	float MovimientoComun;
	float limInferiorX;
	float limDerecho;
	float limIzquierdo;

	float ZigzagFrecuencia = 0.1f;
	float ZigzagAmplitud = 100.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
