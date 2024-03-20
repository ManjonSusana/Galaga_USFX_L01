// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveEnemigaBicho;
class ANaveEnemigaAbeja;
class ANaveEnemigaMariposa;
class ANaveEnemigaAbejaVenenosa;
class ANaveEnemigaAbejaComun;
class ANaveEnemigaBichoAndante;
class ANaveEnemigaBichoVolador;
class ANaveEnemigaTransporteTerrestre;
class ANaveEnemigaTransporteAereo;
class ANaveEnemigaCazaFlechas;
class ANaveEnemigaCazaDisparos;
class ANaveEnemigaMariposaEspia;
class ANaveEnemigaMariposaAsesina;

/**
 *
 */

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
	ANaveEnemigaAbejaComun* NaveEnemigaAbejaComun01;
	ANaveEnemigaBichoAndante* NaveEnemigaBichoAndante01;
	ANaveEnemigaBichoVolador* NaveEnemigaBichoVolador01;
	ANaveEnemigaTransporteTerrestre* NaveEnemigaTransporteTerrestre01;
	ANaveEnemigaTransporteAereo* NaveEnemigaTransporteAereo01;
	ANaveEnemigaCazaFlechas* NaveEnemigaCazaFlechas01;
	ANaveEnemigaCazaDisparos* NaveEnemigaCazaDisparos01;
	ANaveEnemigaMariposaEspia* NaveEnemigaMariposaEspia01;
	ANaveEnemigaMariposaAsesina* NaveEnemigaMariposaAsesina01;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ANaveEnemigaBicho*> TANavesEnemigasBicho;
	TArray<ANaveEnemigaAbeja*> TANavesEnemigasAbeja;
	TArray<ANaveEnemigaMariposa*> TANavesEnemigasMariposa;
public:
	// CREACION DEL TMAP
	TMap<int32, TArray<ANaveEnemigaCaza*>> ColumnaNavesEnemigasCaza;
	TMap<int32, TArray<ANaveEnemigaTransporte*>> ColumnaNavesEnemigasTransporte;
	TMap<int32, TArray<ANaveEnemigaBicho*>> ColumnaNavesEnemigasBicho;
	TMap<int32, TArray<ANaveEnemigaAbeja*>> ColunmaNavesEnemigasAbeja;
	TMap<int32, TArray<ANaveEnemigaMariposa*>> ColumnaNavesEnemigasMariposa;
	
private:
	int TiempoTranscurrido;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};




