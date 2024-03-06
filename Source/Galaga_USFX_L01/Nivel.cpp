// Fill out your copyright notice in the Description page of Project Settings.


#include "Nivel.h"

// Sets default values
ANivel::ANivel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ANivel::~ANivel()
{
	
}

ANivel::ANivel(int numeroNivel, int dificultad, int duracionNivel, int actualizarNivel, int iniciarNivel, int reiniciarNivel, int finalizarNivel, int pausarNivel, int reanudarNivel, FVector posicion, FRotator rotacion, FVector escala)
{
	this->numeroNivel = numeroNivel;
	this->dificultad = dificultad;
	this->duracionNivel = duracionNivel;
	this->actualizarNivel = actualizarNivel;
	this->iniciarNivel = iniciarNivel;
	this->reiniciarNivel = reiniciarNivel;
	this->finalizarNivel = finalizarNivel;
	this->pausarNivel = pausarNivel;
	this->reanudarNivel = reanudarNivel;
	this->SetActorLocation(posicion);
	this->SetActorRotation(rotacion);
	this->SetActorScale3D(escala);
}



// Called when the game starts or when spawned
void ANivel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANivel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANivel::setNumeroNivel(int _numeroNivel)
{
		this->numeroNivel = _numeroNivel;

}

int ANivel::getNumeroNivel()
{
	return numeroNivel;

	return 0;
}

void ANivel::setDificultad(int _dificultad)
{
		this->dificultad = _dificultad;

}

int ANivel::getDificultad()
{
	return dificultad;
	return 0;
}

void ANivel::setDuracionNivel(int _duracionNivel)
{
	this->duracionNivel = _duracionNivel;
}

int ANivel::getDuracionNivel()
{
	return duracionNivel;
	return 0;
}

void ANivel::setActualizarNivel(int _actualizarNivel)
{
	this->actualizarNivel = _actualizarNivel;
}

int ANivel::getActualizarNivel()
{
	return actualizarNivel;
	return 0;
}

void ANivel::setIniciarNivel(int _iniciarNivel)
{
		this->iniciarNivel = _iniciarNivel;
}

int ANivel::getIniciarNivel()
{
	return iniciarNivel;
	return 0;
}
	
void ANivel::setReiniciarNivel(int _reiniciarNivel)
{
		this->reiniciarNivel = _reiniciarNivel;
}

int ANivel::getReiniciarNivel()
{
	return reiniciarNivel;
	
	return 0;
}

void ANivel::setFinalizarNivel(int _finalizarNivel)
{
	this->finalizarNivel = _finalizarNivel;
}

int ANivel::getFinalizarNivel()
{
	return finalizarNivel;
	return 0;
}

void ANivel::setPausarNivel(int _pausarNivel)
{
	this->pausarNivel = _pausarNivel;
}

int ANivel::getPausarNivel()
{
	return pausarNivel;
	return 0;
}

void ANivel::setReanudarNivel(int _reanudarNivel)
{
		this->reanudarNivel = _reanudarNivel;
}

int ANivel::getReanudarNivel()
{
	return reanudarNivel;
	return 0;
}
