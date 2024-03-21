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

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode() {

	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;

}
void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//tiempo de desaparicion de la nave Enemiga Caza
	TiempoTranscurrido++;

	if (TiempoTranscurrido == 5) {

		// Supongamos que quieres eliminar todas las naves enemigas de la columna 0
		int32 ColumnaSAEliminar = 1;
		if (ColumnaNavesEnemigasCaza.Contains(ColumnaSAEliminar))
		{
			TArray<ANaveEnemigaCaza*>& NavesEnColumnaAEliminar = ColumnaNavesEnemigasCaza[ColumnaSAEliminar];
			for (ANaveEnemigaCaza* Nave : NavesEnColumnaAEliminar)
			{
				// Destruir la nave enemiga
				if (Nave)
				{
					Nave->Destroy();
				}
			}
			// Limpiar el TArray después de destruir las naves enemigas
			NavesEnColumnaAEliminar.Empty();
		}
	}
	
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	//INICIALIZAR EL TMAP
	//DIMENSIONES DE ARRAYS
	const int32 NumeroDeColumnasCaza = 1; // N° COLUMNAS
	const int32 NumeroDeFilasCaza = 5;    //  N° FILAS

	// CREANDO NAVES ENEMIGAS CAZA
	for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
		{
			// Ubicacion de la Nave
			FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + 200.0f, 250.0f); // ubicacion actual
			FRotator SpawningRotation = FRotator::ZeroRotator; // Rotación inicial

			//creacion de la nave enemiga caza y su adicion al Tmap inicializado en el GameMode.h
			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);

			NavesEnColumna.Add(NuevaNaveCaza);
		}

		// TArray completamente construido y añadadio al Tmap
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasTransporte = 1; // Número de columnas
	const int32 NumeroDeFilasTransporte = 5;    // Número de filas


	for (int32 Columna = 0; Columna < NumeroDeColumnasTransporte; ++Columna)
	{

		TArray<ANaveEnemigaTransporte*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasTransporte; ++Fila)
		{
			
			FVector SpawningLocation = FVector(Columna * 300 + 600.0f, Fila * 200 + 200.0f, 250.0f); 
			FRotator SpawningRotation = FRotator::ZeroRotator; 
			
			ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawningLocation, SpawningRotation);

			NavesEnColumna.Add(NuevaNaveTransporte);
		}
		ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);

	}

	const int32 NumeroDeColumnasBicho = 1; // Número de columnas
	const int32 NumeroDeFilasBicho = 5;    // Número de filas

	for (int32 Columna = 0; Columna < NumeroDeColumnasBicho; ++Columna)
	{

		TArray<ANaveEnemigaBicho*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasBicho; ++Fila)
		{
			
			FVector SpawnLocation = FVector(Columna * 300 + 900.0f, Fila * 200 + 200.0f, 250.0f); 
			FRotator SpawnRotation = FRotator::ZeroRotator; 	
			ANaveEnemigaBicho* NuevaNaveBicho = GetWorld()->SpawnActor<ANaveEnemigaBicho>(SpawnLocation, SpawnRotation);
			NavesEnColumna.Add(NuevaNaveBicho);
		}

		ColumnaNavesEnemigasBicho.Add(Columna, NavesEnColumna);
	}


		const int32 NumeroDeColumnasAbeja = 1; // Número de columnas
		const int32 NumeroDeFilasAbeja = 5;    // Número de filas

		for (int32 Columna = 0; Columna < NumeroDeColumnasAbeja; ++Columna)
		{

			TArray<ANaveEnemigaAbeja*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasAbeja; ++Fila)
			{
				FVector SpawnLocation = FVector(Columna * 300 + 1200.0f, Fila * 200 + 200.0f, 250.0f); 
				FRotator SpawnRotation = FRotator::ZeroRotator;
				ANaveEnemigaAbeja* NuevaNaveAbeja = GetWorld()->SpawnActor<ANaveEnemigaAbeja>(SpawnLocation, SpawnRotation);
	

				NavesEnColumna.Add(NuevaNaveAbeja);
			}

			// Agregar el TArray al TMap
			ColunmaNavesEnemigasAbeja.Add(Columna, NavesEnColumna);
		}


		const int32 NumeroDeColumnasMariposa = 1; // Número de columnas
		const int32 NumeroDeFilasMariposa = 5;    // Número de filas

		for (int32 Columna = 0; Columna < NumeroDeColumnasMariposa; ++Columna)
		{

			TArray<ANaveEnemigaMariposa*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasMariposa; ++Fila)
			{
				FVector SpawnLocation = FVector(Columna * 300 + 1500.0f, Fila * 200 + 200.0f, 250.0f); 
				FRotator SpawnRotation = FRotator::ZeroRotator; 
				
				ANaveEnemigaMariposa* NuevaNaveMariposa = GetWorld()->SpawnActor<ANaveEnemigaMariposa>(SpawnLocation, SpawnRotation);

				NavesEnColumna.Add(NuevaNaveMariposa);
			}

			ColumnaNavesEnemigasMariposa.Add(Columna, NavesEnColumna);
		}
	
}

