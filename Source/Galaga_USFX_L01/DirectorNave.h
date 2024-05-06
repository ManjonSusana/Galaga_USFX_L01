// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavesBuilder.h"
#include "DirectorNave.generated.h"

class INavesBuilder;

UCLASS()
class GALAGA_USFX_L01_API ADirectorNave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorNave();
private:
	INavesBuilder* NavesBuilder;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirNaveMejoras(FVector ubiNaveMejoras);
	void SetNavesBuilder(AActor* Builder);

	class ANaveMejoras* getNaveMejoras();
};
