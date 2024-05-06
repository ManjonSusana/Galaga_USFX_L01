// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNave.h"
#include "NaveMejoras.h"

// Sets default values
ADirectorNave::ADirectorNave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorNave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ADirectorNave::SetNavesBuilder(AActor* Builder)
{
	NavesBuilder = Cast<INavesBuilder>(Builder); 
	if (!NavesBuilder) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor isnot a LodgingBuilder!Are you sure that the Actor implements that interface ? "));
	}
}

ANaveMejoras* ADirectorNave::getNaveMejoras()
{
	if (NavesBuilder)
	{
		return NavesBuilder->getNaveMejoras();
	}
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));

	return nullptr;
}
void ADirectorNave::ConstruirNaveMejoras(FVector ubiNaveMejoras)
{
	if (!NavesBuilder) { UE_LOG(LogTemp, Error, TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized.")); return; }

	NavesBuilder-> builNaveMejoras(ubiNaveMejoras);
	NavesBuilder->buildVidaNave();
	NavesBuilder->buildMotorNave();
	NavesBuilder->buildArmaNave();
	NavesBuilder->buildMallaNave();
}
