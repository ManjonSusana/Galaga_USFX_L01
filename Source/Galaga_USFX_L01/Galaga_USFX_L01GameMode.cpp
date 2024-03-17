#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBicho.h"
#include "NaveEnemigaAbeja.h"
#include "NaveEnemigaMariposa.h"
#include "NaveEnemigaAbejaVenenosa.h"
#include "NaveEnemigaAbejaComun.h"
#include "NaveEnemigaBichoAndante.h"
#include "NaveEnemigaBichoVolador.h"
#include "NaveEnemigaTransporteTerrestre.h"
#include "NaveEnemigaTransporteAereo.h"
#include "NaveEnemigaCazaFlechas.h"
#include "NaveEnemigaCazaDisparos.h"
#include "NaveEnemigaMariposaEspia.h" 
#include "NaveEnemigaMariposaAsesina.h"


AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);
	FVector ubicacionNave03 = FVector(500.0f, 500.0f, 250.0f);
	FVector ubicacionNave04 = FVector(1000.0f, -500.0f, 250.0f);
	FVector ubicaionNave05 = FVector(200.0f, 150.0f, 250.0f);
	FVector ubicacionNave06 = FVector(150.0f, -150.0f, 250.0f);
	FVector ubicacionNave07 = FVector(100.0f, -550.0f, 250.0f);
	FVector ubicacionNave08 = FVector(200.0f, -150.0f, 250.0f);
	FVector ubicacionNave09 = FVector(120.0f, -500.0f, 250.0f);
	FVector ubicacionNave10 = FVector(200.0f, -150.0f, 250.0f);
	FVector ubicacionNave11 = FVector(100.0f, -150.0f, 250.0f);
	FVector ubicacionNave12 = FVector(150.0f, -150.0f, 250.0f);
	FVector ubicacionNave13 = FVector(100.0f, -150.0f, 250.0f);
	FVector ubicacionNave14 = FVector(100.0f, -150.0f, 250.0f);
	FVector ubicacionNave15 = FVector(100.0f, -150.0f, 250.0f);


	
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
		NaveEnemigaBicho01 = World->SpawnActor<ANaveEnemigaBicho>(ubicacionNave03, rotacionNave);
		NaveEnemigaAbeja01 = World->SpawnActor<ANaveEnemigaAbeja>(ubicacionNave04, rotacionNave);
		NaveEnemigaMariposa01 = World->SpawnActor<ANaveEnemigaMariposa>(ubicaionNave05, rotacionNave);
		NaveEnemigaAbejaVenenosa01 = World->SpawnActor<ANaveEnemigaAbejaVenenosa>(ubicacionNave06, rotacionNave);
		NaveEnemigaAbejaComun01 = World->SpawnActor<ANaveEnemigaAbejaComun>(ubicacionNave07, rotacionNave);
		NaveEnemigaBichoAndante01 = World->SpawnActor<ANaveEnemigaBichoAndante>(ubicacionNave08, rotacionNave);
		NaveEnemigaBichoVolador01 = World->SpawnActor<ANaveEnemigaBichoVolador>(ubicacionNave09, rotacionNave);
		NaveEnemigaTransporteTerrestre01 = World->SpawnActor<ANaveEnemigaTransporteTerrestre>(ubicacionNave10, rotacionNave);
		NaveEnemigaTransporteAereo01 = World->SpawnActor<ANaveEnemigaTransporteAereo>(ubicacionNave11, rotacionNave);
		NaveEnemigaCazaFlechas01 = World->SpawnActor<ANaveEnemigaCazaFlechas>(ubicacionNave12, rotacionNave);
		NaveEnemigaCazaDisparos01 = World->SpawnActor<ANaveEnemigaCazaDisparos>(ubicacionNave13, rotacionNave);
		NaveEnemigaMariposaEspia01 = World->SpawnActor<ANaveEnemigaMariposaEspia>(ubicacionNave14, rotacionNave);
		NaveEnemigaMariposaAsesina01 = World->SpawnActor<ANaveEnemigaMariposaAsesina>(ubicacionNave15, rotacionNave);


		NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
		NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
		NaveEnemigaBicho01->SetPosicion(FVector(600.0f, 500.0f, 200.0f));
		NaveEnemigaAbeja01->SetPosicion(FVector(1000.0f, -500.0f, 200.0f));
		NaveEnemigaMariposa01->SetPosicion(FVector(200.0f, 150.0f, 200.0f));
		NaveEnemigaAbejaVenenosa01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaAbejaComun01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaBichoAndante01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaBichoVolador01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaTransporteTerrestre01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaTransporteAereo01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaCazaFlechas01->SetPosicion(FVector(500.0f, -160.0f, 250.0f));
		NaveEnemigaCazaDisparos01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaMariposaEspia01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
		NaveEnemigaMariposaAsesina01->SetPosicion(FVector(100.0f, -150.0f, 200.0f));
	}
}