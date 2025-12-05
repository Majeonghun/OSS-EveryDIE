// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivorCharacter.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
ASurvivorCharacter::ASurvivorCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASurvivorCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (APlayerController *PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
}

// Called every frame
void ASurvivorCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASurvivorCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent *EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jump
		EnhancedInputComponent->BindAction(Jumping, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(Jumping, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Move
		EnhancedInputComponent->BindAction(Moving, ETriggerEvent::Triggered, this, &ASurvivorCharacter::Move);
	
		// Look
		EnhancedInputComponent->BindAction(Looking, ETriggerEvent::Triggered, this, &ASurvivorCharacter::Look);
	}
}

void ASurvivorCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D InputVector = Value.Get<FVector2D>();
	if (Controller)
	{
		if (InputVector.X != 0.0f)
		{
			AddMovementInput(GetActorRightVector(), InputVector.X);
		}
		if (InputVector.Y != 0.0f)
		{
			AddMovementInput(GetActorForwardVector(), InputVector.Y);
		}
	}
}

void ASurvivorCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
