// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

UENUM()
enum EItemType {
	Consumable	UMETA(DisplayName = "Consumable"),
	Resource	UMETA(DisplayName = "Resource"),
	Weapon		UMETA(DisplayName = "Weapon")
};

UCLASS()
class UNREALSANDBOX_API AItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
