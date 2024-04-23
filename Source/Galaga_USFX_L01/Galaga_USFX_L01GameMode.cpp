#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemigaTransporteFactory.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode() {

	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;

}
void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	FVector ubicacionInicioNavesEnemigasCaza = FVector(1000.0f, -900.0f, 250.f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(1600.0f, -900.0f, 250.0f);
	//FRotator rotacionNavesEnemigasCaza = FRotator(0.0f, 90.0f, 0.0f);
	//FRotator rotacionNavesEnemigasTransporte = FRotator(0.0f, 180.0f, 0.0f);
	FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);

	// CREANDO NAVES ENEMIGAS 
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 2; j++) {
				FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasTransporte.X + j * 200, ubicacionInicioNavesEnemigasTransporte.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::CrearNave("Caza", World, PosicionNaveActual, FRotator::ZeroRotator);
			}
		}

		float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;

	
		for (int j = 0; j < 6; j++) {
			FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
			ANaveEnemiga* NuevaNaveTransporte = ANaveEnemigaTransporteFactory::CrearNave("Transporte", World, PosicionNaveActual, FRotator::ZeroRotator);

		}
	}

};