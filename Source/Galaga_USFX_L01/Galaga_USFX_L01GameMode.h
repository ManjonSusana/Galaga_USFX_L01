// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;

/**
 *
 */

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();
private:
	class AVidaNave* VidaNave01;
	class ADirectorNave* DirectorNave01;
	class ASuperNave* SuperNave01;
	class AMotorNave* MotorNave01;
	class AArmaNave* ArmaNave01;
	class ACapsulasMotor* CapsulasMotor01;
	class ACapsulasArma* CapsulasArma01;
public:

	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;

public:
	// CREACION Y INICIO DEL TMAP    //INT 32 SIMBOLIZA CUALQUIER ELEMENO DE 32 BITS
	TMap<int32, TArray<ANaveEnemigaCaza*>> ColumnaNavesEnemigasCaza;
	TMap<int32, TArray<ANaveEnemigaTransporte*>> ColumnaNavesEnemigasTransporte;

private:
	int TiempoTranscurrido;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};




