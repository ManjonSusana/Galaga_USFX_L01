// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

//class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveEnemigaBicho;
class ANaveEnemigaAbeja;
class ANaveEnemigaMariposa;
class ANaveEnemigaAbejaVenenosa;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

public:
	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaBicho* NaveEnemigaBicho01;
	ANaveEnemigaAbeja* NaveEnemigaAbeja01;
	ANaveEnemigaMariposa* NaveEnemigaMariposa01;
	ANaveEnemigaAbejaVenenosa* NaveEnemigaAbejaVenenosa01;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};



