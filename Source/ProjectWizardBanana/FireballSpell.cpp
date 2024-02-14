// Fill out your copyright notice in the Description page of Project Settings.


#include "FireballSpell.h"

#include "Fireball.h"
#include "Kismet/GameplayStatics.h"

void UFireballSpell::OnActionDown(const TSubclassOf<ASpellProjectile> ProjectileUsed, USceneComponent* SpawnTransform)
{
	Super::OnActionDown(ProjectileUsed,SpawnTransform);

	try
	{
		UWorld* World = GetWorld();
		const FRotator Rotator = SpawnTransform->GetComponentRotation();

		//Grab the Projectile Class That we are using
		UClass* ClassToSpawn = ProjectileUsed.Get();
		
		World->SpawnActor<ASpellProjectile>(ClassToSpawn, SpawnTransform->GetComponentLocation(),
									 Rotator);
	}
	catch (...)
	{
		UE_LOG(LogTemp,Error, TEXT("COULD NOT CAST"))
	}
	
}
