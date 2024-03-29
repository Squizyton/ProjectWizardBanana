// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpellData.h"
#include "Components/ActorComponent.h"
#include "SpellAbilityBase.generated.h"


UCLASS(BlueprintType,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTWIZARDBANANA_API USpellAbilityBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpellAbilityBase();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
	virtual void OnActionDown(TSubclassOf<class ASpellProjectile> ProjectileUsed,USceneComponent* SpawnPosition);
	UFUNCTION(BlueprintCallable)
	virtual void OnActionUp();
};
