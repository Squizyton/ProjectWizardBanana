// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpellProjectile.h"
#include "Fireball.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTWIZARDBANANA_API AFireball : public ASpellProjectile
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;

	
};
