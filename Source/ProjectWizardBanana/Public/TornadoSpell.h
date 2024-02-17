// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectWizardBanana/SpellAbilityBase.h"
#include "TornadoSpell.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTWIZARDBANANA_API UTornadoSpell : public USpellAbilityBase
{
	GENERATED_BODY()

public:
	virtual void OnActionUp() override;
	virtual void OnActionDown(TSubclassOf<ASpellProjectile> ProjectileUsed, USceneComponent* SpawnPosition) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool ReadyToSpawn;
};
