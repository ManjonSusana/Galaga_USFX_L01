// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Score.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AScore : public AActor
{
	GENERATED_BODY()
private:
	int score;
	int maxScore;
    int minScore;

public:
	FORCEINLINE int GetScore() const { return score; }
	FORCEINLINE int GetMaxScore() const { return maxScore; }
	FORCEINLINE int GetMinScore() const { return minScore; }

	FORCEINLINE void SetScore(int _score) { score = _score; }
	FORCEINLINE void SetMaxScore(int _maxScore) { maxScore = _maxScore; }
	FORCEINLINE void SetMinScore(int _minScore) { minScore = _minScore; }

	
public:	
	// Sets default values for this actor's properties
	AScore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
