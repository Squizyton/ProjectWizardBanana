// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectWizardBanana/Public/TornadoSpell.h"

void UTornadoSpell::OnActionUp()
{
	Super::OnActionUp();
	
	if(ReadyToSpawn)
	{
		//Spawn the actual tornado.
	}

	
}

void UTornadoSpell::OnActionDown(TSubclassOf<ASpellProjectile> ProjectileUsed, USceneComponent* SpawnPosition)
{
	Super::OnActionDown(ProjectileUsed, SpawnPosition);
}

void UTornadoSpell::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(ReadyToSpawn)
	{
		
	}
}

