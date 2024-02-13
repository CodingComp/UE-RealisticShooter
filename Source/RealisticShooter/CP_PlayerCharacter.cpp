// Fill out your copyright notice in the Description page of Project Settings.


#include "CP_PlayerCharacter.h"

// Sets default values
ACP_PlayerCharacter::ACP_PlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACP_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACP_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACP_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

