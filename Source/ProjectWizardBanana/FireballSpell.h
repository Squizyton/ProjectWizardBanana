// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpellAbilityBase.h"
#include "FireballSpell.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTWIZARDBANANA_API UFireballSpell : public USpellAbilityBase
{
	GENERATED_BODY()


public:
	virtual void OnActionDown(TSubclassOf<ASpellProjectile> ProjectileUsed) override;
	
};
