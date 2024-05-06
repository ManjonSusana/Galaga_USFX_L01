// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveMejoras.h"
#include "CapsulasMotor.h"
#include "CapsulaArma.h"

// Sets default values
ANaveMejoras::ANaveMejoras()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaNave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNave"));
	MallaNave->SetupAttachment(RootComponent);
	RootComponent = MallaNave;

	// Inicializa el componente de movimiento de naves
	MovimientoNavesComponent = CreateDefaultSubobject<UComponenteMovimiento>(TEXT("MovimientoNavesComponent"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MovimientoNavesupper"));

}

// Called when the game starts or when spawned
void ANaveMejoras::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ANaveMejoras::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	TiempoTranscurrido++;

	if (Verificacion) {
		if (TiempoTranscurrido >= 300) 
		{
			CapsulasMotor01 = GetWorld()->SpawnActor<ACapsulasMotor>(GetActorLocation() + FVector(100.0f, 0.0f, 0.0f), FRotator::ZeroRotator);
			
			TiempoTranscurrido = 0;
		}
		
	}

	if(VerificacionArma) {
		if (TiempoTranscurrido >= 500)
		{
			CapsulaArma01 = GetWorld()->SpawnActor<ACapsulaArma>(GetActorLocation() + FVector(100.0f, 0.0f, 0.0f), FRotator::ZeroRotator);

			TiempoTranscurrido = 0;
		}

	}
	

}

void ANaveMejoras::SetVidaNave(FString NewVidaNave)
{
	VidaNave = NewVidaNave;
}

void ANaveMejoras::SetMotorNave(FString NewVelocidadNave)
{
		VelocidadNave = NewVelocidadNave;

		Verificacion = true;

		
}

void ANaveMejoras::SetArmaNave(FString NewArmaNave)
{
		ArmaNave = NewArmaNave;


		VerificacionArma = true;
}

void ANaveMejoras::SetMalla(UStaticMeshComponent* NewMallaNave)
{
			MallaNave = NewMallaNave;
}

void ANaveMejoras::CaracteristicasNave()
{
	UE_LOG(LogTemp, Warning, TEXT("Vida de la nave: %s"), *VidaNave);
	UE_LOG(LogTemp, Warning, TEXT("Velocidad de la nave: %s"), *VelocidadNave);
	UE_LOG(LogTemp, Warning, TEXT("Arma de la nave: %s"), *ArmaNave);
}

