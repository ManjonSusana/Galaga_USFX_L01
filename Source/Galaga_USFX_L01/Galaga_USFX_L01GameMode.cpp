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
	
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	const int32 NumeroDeColumnasCaza = 1; // Número de columnas
	const int32 NumeroDeFilasCaza = 5;    // Número de filas

	// Generar naves enemigas caza y agregarlas al TMap en las columnas correspondientes
	for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
		{
			// Definir la ubicación y rotación de la nave enemiga
			FVector SpawnLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + 200.0f, 250.0f); // Ejemplo de ubicación de generación
			FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial

			// Generar la nave enemiga caza y agregarla al TArray
			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
			if (NuevaNaveCaza)
			{
				// Configurar la lógica de la nave enemiga caza si es necesario
			}
			else
			{
				// Ocurrió un error al crear la nave enemiga caza
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga caza."));
			}
			NavesEnColumna.Add(NuevaNaveCaza);
		}

		// Agregar el TArray al TMap
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasTransporte = 1; // Número de columnas
	const int32 NumeroDeFilasTransporte = 5;    // Número de filas


	for (int32 Columna = 0; Columna < NumeroDeColumnasTransporte; ++Columna)
	{

		TArray<ANaveEnemigaTransporte*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasTransporte; ++Fila)
		{
			// Definir la ubicación y rotación de la nave enemiga
			FVector SpawnLocation = FVector(Columna * 300 + 600.0f, Fila * 200 + 200.0f, 250.0f); // Ejemplo de ubicación de generación
			FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial
			// Generar la nave enemiga transporte y agregarla al TArray
			ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
			if (NuevaNaveTransporte)
			{
				// Configurar la lógica de la nave enemiga transporte si es necesario
			}
			else
			{
				// Ocurrió un error al crear la nave enemiga transporte
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga transporte."));
			}

			NavesEnColumna.Add(NuevaNaveTransporte);
		}

		// Agregar el TArray al TMap
		ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);

	}

	const int32 NumeroDeColumnasBicho = 1; // Número de columnas
	const int32 NumeroDeFilasBicho = 5;    // Número de filas

	for (int32 Columna = 0; Columna < NumeroDeColumnasBicho; ++Columna)
	{

		TArray<ANaveEnemigaBicho*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasBicho; ++Fila)
		{
			// Definir la ubicación y rotación de la nave enemiga
			FVector SpawnLocation = FVector(Columna * 300 + 900.0f, Fila * 200 + 200.0f, 250.0f); // Ejemplo de ubicación de generación
			FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial
			// Generar la nave enemiga transporte y agregarla al TArray
			ANaveEnemigaBicho* NuevaNaveBicho = GetWorld()->SpawnActor<ANaveEnemigaBicho>(SpawnLocation, SpawnRotation);
			if (NuevaNaveBicho)
			{
				// Configurar la lógica de la nave enemiga transporte si es necesario
			}
			else
			{
				// Ocurrió un error al crear la nave enemiga transporte
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga BICHO."));
			}

			NavesEnColumna.Add(NuevaNaveBicho);
		}

		// Agregar el TArray al TMap
		ColumnaNavesEnemigasBicho.Add(Columna, NavesEnColumna);
	}


		const int32 NumeroDeColumnasAbeja = 1; // Número de columnas
		const int32 NumeroDeFilasAbeja = 5;    // Número de filas

		for (int32 Columna = 0; Columna < NumeroDeColumnasAbeja; ++Columna)
		{

			TArray<ANaveEnemigaAbeja*> NavesEnColumna;
			for (int32 Fila = 0; Fila < NumeroDeFilasAbeja; ++Fila)
			{
				// Definir la ubicación y rotación de la nave enemiga
				FVector SpawnLocation = FVector(Columna * 300 + 1200.0f, Fila * 200 + 200.0f, 250.0f); // Ejemplo de ubicación de generación
				FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial
				// Generar la nave enemiga transporte y agregarla al TArray
				ANaveEnemigaAbeja* NuevaNaveAbeja = GetWorld()->SpawnActor<ANaveEnemigaAbeja>(SpawnLocation, SpawnRotation);
				if (NuevaNaveAbeja)
				{
					// Configurar la lógica de la nave enemiga transporte si es necesario
				}
				else
				{
					// Ocurrió un error al crear la nave enemiga transporte
					UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga BICHO."));
				}

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
				// Definir la ubicación y rotación de la nave enemiga
				FVector SpawnLocation = FVector(Columna * 300 + 1500.0f, Fila * 200 + 200.0f, 250.0f); // Ejemplo de ubicación de generación
				FRotator SpawnRotation = FRotator::ZeroRotator; // Rotación inicial
				// Generar la nave enemiga transporte y agregarla al TArray
				ANaveEnemigaMariposa* NuevaNaveMariposa = GetWorld()->SpawnActor<ANaveEnemigaMariposa>(SpawnLocation, SpawnRotation);
				if (NuevaNaveMariposa)
				{
					// Configurar la lógica de la nave enemiga transporte si es necesario
				}
				else
				{
					// Ocurrió un error al crear la nave enemiga transporte
					UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga BICHO."));
				}

				NavesEnColumna.Add(NuevaNaveMariposa);
			}

			// Agregar el TArray al TMap
			ColumnaNavesEnemigasMariposa.Add(Columna, NavesEnColumna);
		}
	
}

