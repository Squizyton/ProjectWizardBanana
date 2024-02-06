// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpellProjectile.h"
#include "Engine/DataAsset.h"
#include "SpellData.generated.h"

/**
 * 
 */



//We want to define the Spell Element of this ability
UENUM(BlueprintType,meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class SpellElement : uint8{
	None = 0 UMETA(Hidden),
	Earth = 1 << 0 UMETA(DisplayName = "Earth"),
	Fire = 1 << 1 UMETA(DisplayName = "Fire"),
	Water = 1 << 2 UMETA(DisplayName = "Water"),
	Air = 1 << 3 UMETA(DisplayName = "Air"),
};

UCLASS(Blueprintable)
class PROJECTWIZARDBANANA_API USpellData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Details")
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Details")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Details")
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Ability Attributes")
	int manaCost;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = "Elements",meta=(Bitmask,BitmaskEnum=SpellElement))
	int elementType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = "Elements",meta=(Bitmask,BitmaskEnum=SpellElement))
	int affectedByType;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category= "Projectile")
	TSubclassOf<class ASpellProjectile>Projectile;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Spell")
	TSubclassOf<class USpellAbilityBase>TheSpell;
	
	
};
