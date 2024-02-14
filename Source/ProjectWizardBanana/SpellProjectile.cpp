// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellProjectile.h"

// Sets default values
ASpellProjectile::ASpellProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//This will allow us for the Root component to show up in Editor
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	RootComponent = Root;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));

	//Attach the Mesh to the root. Think Child and Parent
	Mesh->SetupAttachment(RootComponent);
	Material = CreateDefaultSubobject<UMaterial>(TEXT("MATERIAL"));
	


	
}

// Called when the game starts or when spawned
void ASpellProjectile::BeginPlay()
{
	Super::BeginPlay();


	
	
}

// Called every frame
void ASpellProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

