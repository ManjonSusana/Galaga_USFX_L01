// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CapsulasMotor.h"
#include "CapsulaArma.h"
#include "ComponenteInventario.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UComponenteInventario : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteInventario();


	UPROPERTY()
	TArray<ACapsulasMotor*> CurrentInventory;
	UPROPERTY()
	TArray<ACapsulaArma*> CurrentInventoryArma;


	UFUNCTION()
	int32 AgregarAlInventario(ACapsulasMotor* AgregarCapsula);
	UFUNCTION()
	int32 AgregarAlInventarioArma(ACapsulaArma* AgregarCapsulaArma);

	UFUNCTION()
	void RemoverDeInventario(ACapsulasMotor* RemoverCapsula);
	UFUNCTION()
	void RemoverDeInventarioArma(ACapsulaArma* RemoverCapsulaArma);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
