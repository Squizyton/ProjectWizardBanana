// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpellProjectile.h"
#include "Components/SphereComponent.h"
#include "Fireball.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTWIZARDBANANA_API AFireball : public ASpellProjectile
{
	GENERATED_BODY()

	AFireball();
public:
	UPROPERTY(EditAnywhere)
	USphereComponent* SphereComponent;
	
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;
	virtual bool GeneratePrimitiveComponent() override;
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
	
};
