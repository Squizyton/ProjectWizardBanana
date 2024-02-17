// Fill out your copyright notice in the Description page of Project Settings.


#include "Fireball.h"

#include "Components/SphereComponent.h"

AFireball::AFireball() : ASpellProjectile()
{
	AFireball::GeneratePrimitiveComponent();
}



void AFireball::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//Get the location of the actor;
	FVector Location = GetActorLocation();
	//Set the Location to a new location by getting its ForwardVector and * it by speed/DeltaTime
	Location += GetActorForwardVector()* Speed * DeltaSeconds;
	//Set the Actor Location
	SetActorLocation(Location);
}

void AFireball::BeginPlay()
{
	Super::BeginPlay();
	
	SphereComponent->SetGenerateOverlapEvents(true);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this,&AFireball::OnBeginOverlap);
}

bool AFireball::GeneratePrimitiveComponent()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	SphereComponent->SetupAttachment(RootComponent);
	
	return true;
}

void AFireball::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	const FString CollidedWith = "Collided With: " + OtherActor->GetName();
	
	if(OtherActor != this)
	{
		UE_LOG(LogTemp,Warning,TEXT("%ls"),*CollidedWith);
		Destroy();
	}
}
