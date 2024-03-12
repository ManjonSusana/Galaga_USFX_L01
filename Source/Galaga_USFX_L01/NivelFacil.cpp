// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelFacil.h"

// Sets default values
ANivelFacil::ANivelFacil()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNivel->SetStaticMesh(ShipMesh.Object);
	facil = 1;
}

void ANivelFacil::dificultad()
{

}
