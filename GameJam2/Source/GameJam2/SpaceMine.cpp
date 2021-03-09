// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceMine.h"
#include "Components/SphereComponent.h"
#include "GameJam2Pawn.h"

// Sets default values
ASpaceMine::ASpaceMine()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Kill_Radius = CreateDefaultSubobject<USphereComponent>(TEXT("Kill Radius"));

	Kill_Radius->InitSphereRadius(150.0f);
	
	Kill_Radius->SetCollisionProfileName("Trigger");

	RootComponent = Kill_Radius;

}

// Called when the game starts or when spawned
void ASpaceMine::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceMine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
