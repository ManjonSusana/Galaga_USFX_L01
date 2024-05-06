// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavesBuilder.h"
#include "ArmaNave.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AArmaNave : public AActor, public INavesBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmaNave();

	UPROPERTY(VisibleAnywhere, Category = "ArmarNave")
	class ANaveMejoras* NaveMejoras;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void builNaveMejoras(FVector ubicacionNaveMejoras) override;
	virtual void buildVidaNave() override;
	virtual void buildMotorNave() override;
	virtual void buildArmaNave() override;
	virtual void buildMallaNave() override;
	class UStaticMesh* ArmaNave = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	virtual class ANaveMejoras* getNaveMejoras() override;

};
