// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorActor.h"


// Sets default values
ADoorActor::ADoorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorActor::InteractWithDoor_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("InteractWithDoor Called"));
}

