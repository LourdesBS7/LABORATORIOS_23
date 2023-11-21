// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaDisparoEstrella.h"
#include "Planta_Estrategia.h"

// Sets default values
AEstrategiaDisparoEstrella::AEstrategiaDisparoEstrella()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaDisparoEstrella::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaDisparoEstrella::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AEstrategiaDisparoEstrella::AtaquePlanta5()
//{
//    // Disparo hacia arriba
//    FireShot(FVector(0.0f, 1.0f, 0.0f));
//
//    // Disparo hacia abajo
//    FireShot(FVector(0.0f, -1.0f, 0.0f));
//
//    // Disparo hacia la derecha
//    FireShot(FVector(1.0f, 0.0f, 0.0f));
//
//    // Disparo hacia la izquierda
//    FireShot(FVector(-1.0f, 0.0f, 0.0f));
//
//    // Disparo en diagonal (arriba-derecha)
//    FireShot(FVector(1.0f, 1.0f, 0.0f).GetSafeNormal());
//
//    // Puedes ajustar las direcciones y agregar más si es necesario
//}




void AEstrategiaDisparoEstrella::EstrategiaPlanta(AActor* PlantaHabi)
{
	//Execute the routine of this type of Strategy
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Estrategia de disparo Estrella"));
	APlanta_Estrategia* PlantaEs = Cast<APlanta_Estrategia>(PlantaHabi);
	//PlantaEs->SetDispararEstrella(true);

}
