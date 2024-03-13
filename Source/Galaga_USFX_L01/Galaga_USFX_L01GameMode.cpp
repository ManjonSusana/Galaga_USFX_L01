#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBicho.h"
#include "NaveEnemigaAbeja.h"
#include "NaveEnemigaMariposa.h"
#include "NaveEnemigaAbejaVenenosa.h"




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
	FVector ubicacionNave06 = FVector(100.0f, -150.0f, 250.0f);
	
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
		NaveEnemigaMariposaVenenosa02 = World->SpawnActor<ANaveEnemigaMariposaVenenosa>(ubicacionNave06, rotacionNave);
	}

	NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
	NaveEnemigaBicho01->SetPosicion(FVector(600.0f, 500.0f, 200.0f));
	NaveEnemigaAbeja01->SetPosicion(FVector(1000.0f, -500.0f, 200.0f));
	NaveEnemigaMariposa01->SetPosicion(FVector(200.0f, 150.0f, 200.0f));
	NaveEnemigaMariposaVenenosa02->SetPosicion(FVector(100.0f, -150.0f, 200.0f));


}