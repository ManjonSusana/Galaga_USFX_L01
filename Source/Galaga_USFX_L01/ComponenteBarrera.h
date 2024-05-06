// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ComponenteBarrera.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UComponenteBarrera : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteBarrera(); //Constructor de la clase
	UFUNCTION(BlueprintCallable, Category = "Barrera")  //Funcion que se puede llamar desde blueprints para activar la barrera
		void CrearBarrerra(); //Funcion que instancia una barrera en la posicion del componente
	UPROPERTY(EditAnywhere); //Variable que se puede editar desde el editor de unreal
	TSubclassOf<AActor>BarreraToSpawn; //Variable que almacena el tipo de barrera que se va a instanciar



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
