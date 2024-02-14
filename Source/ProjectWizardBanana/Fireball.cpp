// Fill out your copyright notice in the Description page of Project Settings.


#include "Fireball.h"

AFireball::AFireball() : ASpellProjectile()
{
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
