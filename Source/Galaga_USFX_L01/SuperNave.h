// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavesBuilder.h"
#include "ComponenteMovimiento.h"
#include "SuperNave.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ASuperNave : public AActor, public INavesBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASuperNave();
	UPROPERTY(VisibleAnywhere, Category = "SuperNave")
	class ANaveMejoras* NaveMejoras;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Declaración del componente de movimiento de naves
	UComponenteMovimiento* MovimientoNavesComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void builNaveMejoras(FVector ubicacionNaveMejoras) override;
	virtual void buildVidaNave() override;
	virtual void buildMotorNave() override;
	virtual void buildArmaNave() override;
	virtual void buildMallaNave() override;
	class UStaticMesh* SuperNave = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	virtual class ANaveMejoras* getNaveMejoras() override;


};
