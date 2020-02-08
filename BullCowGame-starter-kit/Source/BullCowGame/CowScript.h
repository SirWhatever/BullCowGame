// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CowScript.generated.h"

UCLASS()
class BULLCOWGAME_API ACowScript : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACowScript();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float random_number_;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
