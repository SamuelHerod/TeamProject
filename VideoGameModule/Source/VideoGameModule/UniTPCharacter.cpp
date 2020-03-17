// Fill out your copyright notice in the Description page of Project Settings.


#include "UniTPCharacter.h"

// Sets default values
AUniTPCharacter::AUniTPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUniTPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUniTPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUniTPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

