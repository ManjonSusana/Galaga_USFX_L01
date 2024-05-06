#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "ComponenteMovimiento.h"
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
#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemigaTransporteFactory.h"
#include "NaveEnemigaBichoFactory.h"
#include "NaveEnemigaAbejaFactory.h"
#include "NaveEnemigaMariposaFactory.h"
#include "VidaNave.h"
#include "DirectorNave.h"
#include "NaveMejoras.h"
#include "SuperNave.h"
#include "MotorNave.h"
#include "ArmaNave.h"
#include "CapsulasMotor.h"
#include "CapsulaArma.h"


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
	
	
}

void AGalaga_USFX_L01GameMode::BeginPlay() {
	Super::BeginPlay();

	DirectorNave01 = GetWorld()->SpawnActor<ADirectorNave>(ADirectorNave::StaticClass());  //staticclass es para que sepa que clase es y lo cree--bisca en todoas las clases de unreal para llegar a spawnear

	VidaNave01 = GetWorld()->SpawnActor<AVidaNave>(AVidaNave::StaticClass());
	DirectorNave01->SetNavesBuilder(VidaNave01);
	DirectorNave01->ConstruirNaveMejoras(FVector(-900.0f, 500.0f, 250.0f));

	SuperNave01 = GetWorld()->SpawnActor<ASuperNave>(ASuperNave::StaticClass());
	DirectorNave01->SetNavesBuilder(SuperNave01);
	DirectorNave01->ConstruirNaveMejoras(FVector(-1000.0f, 500.0f, 250.0f));

	MotorNave01 = GetWorld()->SpawnActor<AMotorNave>(AMotorNave::StaticClass());
	DirectorNave01->SetNavesBuilder(MotorNave01);
	DirectorNave01->ConstruirNaveMejoras(FVector(-1200.0f, 500.0f, 250.0f));

	ArmaNave01 = GetWorld()->SpawnActor<AArmaNave>(AArmaNave::StaticClass());
	DirectorNave01->SetNavesBuilder(ArmaNave01);
	DirectorNave01->ConstruirNaveMejoras(FVector(-1400.0f, 500.0f, 250.0f));


	ANaveMejoras* NaveMejoras = DirectorNave01->getNaveMejoras();
	NaveMejoras->CaracteristicasNave();
	//SPAWNEO DE LAS CAPSULAS EN EL GAMEMODE

	/*FVector ubicacionCapsulasMotor = FVector(1000.0f, 0.0f, 250.0f);
	* FVector ubicacionCapsulasArma = FVector(1000.0f, 0.0f, 250.0f);
	
	CapsulasMotor01 = GetWorld()->SpawnActor<ACapsulasMotor>(ubicacionCapsulasMotor, FRotator::ZeroRotator);
	CapsulasArma01 = GetWorld()->SpawnActor<ACapsulaArma>(ubicacionCapsulasArma, FRotator::ZeroRotator);
	
	*/
	
	//Set the game state to playing
	//INICIALIZAR EL TMAP
	//DIMENSIONES DE ARRAYS
	FVector ubicacionInicioNavesEnemigasCaza = FVector(200.0f, -900.0f, 250.f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(400.0f, -900.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasBicho = FVector(600.0f, -900.0f, 250.f);
	FVector ubicacionInicioNavesEnemigasAbeja = FVector(800.0f, -900.0f, 250.f);
	FVector ubicacionInicioNavesEnemigasMariposa = FVector(1000.0f, -900.0f, 250.f);

	FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);

	const int32 NumeroDeColumnasCaza = 1; // N° COLUMNAS
	const int32 NumeroDeFilasCaza = 5;    //  N° FILAS

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 1; j++) {
				FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasTransporte.X + j * 200, ubicacionInicioNavesEnemigasTransporte.Y + i * 200, ubicacionInicioNavesEnemigasTransporte.Z);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::CrearNave("Caza", World, PosicionNaveActual, FRotator::ZeroRotator);

			}
			float nuevaposicionTransporte = ubicacionInicioNavesEnemigasTransporte.X + 300.0f;
			for (int j = 0; j < 6; j++) {

				FVector PosicionNaveActual = FVector(nuevaposicionTransporte, ubicacionInicioNavesEnemigasTransporte.Y + j * 200, ubicacionInicioNavesEnemigasTransporte.Z);
				ANaveEnemiga* NuevaNaveTransporte = ANaveEnemigaTransporteFactory::CrearNave("Transporte", World, PosicionNaveActual, FRotator::ZeroRotator);

			}
			float nuevaposicionBicho = ubicacionInicioNavesEnemigasBicho.X + 300.0f;
			for (int j = 0; j < 6; j++) {

				FVector PosicionNaveActual = FVector(nuevaposicionBicho, ubicacionInicioNavesEnemigasBicho.Y + j * 200, ubicacionInicioNavesEnemigasBicho.Z);
				ANaveEnemiga* NuevaNaveBicho = ANaveEnemigaBichoFactory::CrearNave("Bicho", World, PosicionNaveActual, FRotator::ZeroRotator);


			}
			float nuevaposicionAbeja = ubicacionInicioNavesEnemigasAbeja.X + 300.0f;
			for (int j = 0; j < 6; j++) {

				FVector PosicionNaveActual = FVector(nuevaposicionAbeja, ubicacionInicioNavesEnemigasAbeja.Y + j * 200, ubicacionInicioNavesEnemigasAbeja.Z);
				ANaveEnemiga* NuevaNaveAbeja = ANaveEnemigaAbejaFactory::CrearNave("Abeja", World, PosicionNaveActual, FRotator::ZeroRotator);


			}
			float nuevaposicionMariposa = ubicacionInicioNavesEnemigasMariposa.X + 300.0f;
			for (int j = 0; j < 6; j++) {

				FVector PosicionNaveActual = FVector(nuevaposicionMariposa, ubicacionInicioNavesEnemigasMariposa.Y + j * 200, ubicacionInicioNavesEnemigasMariposa.Z);
				ANaveEnemiga* NuevaNaveMariposa = ANaveEnemigaMariposaFactory::CrearNave("Mariposa", World, PosicionNaveActual, FRotator::ZeroRotator);


			}
		}
	}
}


		/*
		//float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X + 400.0f;
		//for (int i = 0; i < 6; i++) {
		//	for (int j = 0; j < 6; j++) {

		//		FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
		//		ANaveEnemiga* NuevaNaveTransporte = ANaveEnemigaTransporteFactory::CrearNave("Transporte", World, PosicionNaveActual, FRotator::ZeroRotator);


		//	}
		//}
		//
		//float posicionX = ubicacionInicioNavesEnemigasBicho.X + 800.0f;

		//for (int i = 0; i < 6; i++) {
		//	for (int j = 0; j < 6; j++) {

		//		FVector PosicionNaveActual = FVector(posicionX, ubicacionInicioNavesEnemigasBicho.Y + j * 400, ubicacionInicioNavesEnemigasBicho.Z);
		//		ANaveEnemiga* NuevaNaveBicho = ANaveEnemigaBichoFactory::CrearNave("Bicho", World, PosicionNaveActual, FRotator::ZeroRotator);


		//	}
		//}

		//float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X + 400.0f;
		//for (int i = 0; i < 6; i++) {
		//	for (int j = 0; j < 2; j++) {

		//		FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
		//		ANaveEnemiga* NuevaNaveTransporte = ANaveEnemigaTransporteFactory::CrearNave("Transporte", World, PosicionNaveActual, FRotator::ZeroRotator);


		//	}
		//}
		
	}

	//// CREANDO NAVES ENEMIGAS CAZA
	//for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
	//{
	//	TArray<ANaveEnemigaCaza*> NavesEnColumna;
	//	for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
	//	{
	//		// Ubicacion de la Nave
	//		FVector SpawningLocation = FVector(Columna * 300 + 0.0f, Fila * 200 - 400.0f, 250.0f); // ubicacion actual
	//		FRotator SpawningRotation = FRotator( 0.0f, 90.0f, 0.0f);

	//		//creacion de la nave enemiga caza y su adicion al Tmap inicializado en el GameMode.h
	//		ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);

	//		NavesEnColumna.Add(NuevaNaveCaza);
	//	}

	//	// TArray completamente construido y añadadio al Tmap
	//	ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	//}

	//const int32 NumeroDeColumnasTransporte = 1; // Número de columnas
	//const int32 NumeroDeFilasTransporte = 5;    // Número de filas


	//for (int32 Columna = 0; Columna < NumeroDeColumnasTransporte; ++Columna)
	//{

	//	TArray<ANaveEnemigaTransporte*> NavesEnColumna;
	//	for (int32 Fila = 0; Fila < NumeroDeFilasTransporte; ++Fila)
	//	{
	//		
	//		FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 - 400.0f, 250.0f); 
	//		FRotator SpawningRotation = FRotator(0.0f, 180.0f, 0.0f);
	//		
	//		ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawningLocation, SpawningRotation);

	//		NavesEnColumna.Add(NuevaNaveTransporte);
	//	}
	//	ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);

	//}

	//const int32 NumeroDeColumnasBicho = 1; // Número de columnas
	//const int32 NumeroDeFilasBicho = 5;    // Número de filas

	//for (int32 Columna = 0; Columna < NumeroDeColumnasBicho; ++Columna)
	//{

	//	TArray<ANaveEnemigaBicho*> NavesEnColumna;
	//	for (int32 Fila = 0; Fila < NumeroDeFilasBicho; ++Fila)
	//	{
	//		
	//		FVector SpawnLocation = FVector(Columna * 300 + 600.0f, Fila * 200 - 400.0f, 250.0f);
	//		FRotator SpawnRotation = FRotator(0.0f, 180.0f, 0.0f);
	//		ANaveEnemigaBicho* NuevaNaveBicho = GetWorld()->SpawnActor<ANaveEnemigaBicho>(SpawnLocation, SpawnRotation);
	//		NavesEnColumna.Add(NuevaNaveBicho);
	//	}

	//	ColumnaNavesEnemigasBicho.Add(Columna, NavesEnColumna);
	//}


	//	const int32 NumeroDeColumnasAbeja = 1; // Número de columnas
	//	const int32 NumeroDeFilasAbeja = 5;    // Número de filas

	//	for (int32 Columna = 0; Columna < NumeroDeColumnasAbeja; ++Columna)
	//	{

	//		TArray<ANaveEnemigaAbeja*> NavesEnColumna;
	//		for (int32 Fila = 0; Fila < NumeroDeFilasAbeja; ++Fila)
	//		{
	//			FVector SpawnLocation = FVector(Columna * 300 + 900.0f, Fila * 200 - 400.0f, 250.0f);
	//			FRotator SpawnRotation = FRotator(0.0f, 180.0f, 0.0f);
	//			ANaveEnemigaAbeja* NuevaNaveAbeja = GetWorld()->SpawnActor<ANaveEnemigaAbeja>(SpawnLocation, SpawnRotation);
	//

	//			NavesEnColumna.Add(NuevaNaveAbeja);
	//		}

	//		// Agregar el TArray al TMap
	//		ColunmaNavesEnemigasAbeja.Add(Columna, NavesEnColumna);
	//	}


	//	const int32 NumeroDeColumnasMariposa = 1; // Número de columnas
	//	const int32 NumeroDeFilasMariposa = 5;    // Número de filas

	//	for (int32 Columna = 0; Columna < NumeroDeColumnasMariposa; ++Columna)
	//	{

	//		TArray<ANaveEnemigaMariposa*> NavesEnColumna;
	//		for (int32 Fila = 0; Fila < NumeroDeFilasMariposa; ++Fila)
	//		{
	//			FVector SpawnLocation = FVector(Columna * 300 + 1200.0f, Fila * 200 - 400.0f, 250.0f);
	//			FRotator SpawnRotation = FRotator(0.0f, 180.0f, 0.0f);
	//			
	//			ANaveEnemigaMariposa* NuevaNaveMariposa = GetWorld()->SpawnActor<ANaveEnemigaMariposa>(SpawnLocation, SpawnRotation);

	//			NavesEnColumna.Add(NuevaNaveMariposa);
	//		}

	//		ColumnaNavesEnemigasMariposa.Add(Columna, NavesEnColumna);
	//	}
	//
}*/

