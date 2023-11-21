// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil_Fuego.h"

#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"



AProyectil_Fuego::AProyectil_Fuego()
{

	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh1;
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh2;
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh3;
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh4;
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh5;


		FConstructorStatics()
			: PlaneMesh1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"))
			, PlaneMesh2(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"))
			, PlaneMesh3(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"))
			, PlaneMesh4(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"))
			, PlaneMesh5(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_90.Shape_Pipe_90'"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;


	MeshBala = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBala111"));
	//MeshBala->SetStaticMesh(ConstructorStatics.PlaneMesh5.Get());
	RootComponent = MeshBala;

	//MeshBala2 = ConstructorStatics.PlaneMesh2.Get();
	//MeshBala3 = ConstructorStatics.PlaneMesh3.Get();
	//MeshBala4 = ConstructorStatics.PlaneMesh4.Get();
	//MeshBala5 = ConstructorStatics.PlaneMesh5.Get();


	//static ConstructorHelpers::FObjectFinder<UStaticMesh> FuegoMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	//MeshBala->SetStaticMesh(FuegoMesh.Object);




	MeshBala->SetStaticMesh(ConstructorStatics.PlaneMesh5.Get());


}


//-----------------------------------------------------------------------------------------------------AQUI ERROR
//AProyectil_Fuego::FConstructorStatics AProyectil_Fuego::ConstructorStatics;

void AProyectil_Fuego::colocarMesh()
{
	//MeshBala->SetStaticMesh(ConstructorStatics.PlaneMesh5.Get());
	if (MeshBala) // Asegúrate de que MeshBala no es nullptr
	{
		//MeshBala->SetStaticMesh(ConstructorStatics.PlaneMesh5.Get());
	}


}
