// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TipoDisparo.h"
#include "DisparoDeFuego.generated.h"

class AArmaDeFuego;
UCLASS()
class PVZ_USFX_LAB02_API ADisparoDeFuego : public AActor, public ITipoDisparo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADisparoDeFuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Weapon Actor
	UPROPERTY();
	AArmaDeFuego* Arma;

public:
	//Fire the Weapon
	void DisparoHielo() override {};

	void DisparoFuego() override;



};
