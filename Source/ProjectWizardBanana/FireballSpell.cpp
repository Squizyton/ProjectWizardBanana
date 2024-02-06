// Fill out your copyright notice in the Description page of Project Settings.


#include "FireballSpell.h"

#include "Fireball.h"
#include "Kismet/GameplayStatics.h"

void UFireballSpell::OnActionDown(const TSubclassOf<ASpellProjectile> ProjectileUsed)
{
	Super::OnActionDown(ProjectileUsed);

	UWorld* world = GetWorld();
	FRotator rotator;
	world->SpawnActor<AFireball>(AFireball::StaticClass(), world->GetFirstPlayerController()->K2_GetActorLocation(),
	                             rotator);
	UE_LOG(LogTemp, Warning, TEXT("Hello I Spawned Something"));
}
