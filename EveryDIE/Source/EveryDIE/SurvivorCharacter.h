// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"

#include "SurvivorCharacter.generated.h"

UCLASS()
class EVERYDIE_API ASurvivorCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivorCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enhanced Input", meta = (ALlowPrivateAccess = "true"))
	class UInputAction* Moving;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enhanced Input", meta = (ALlowPrivateAccess = "true"))
	class UInputAction* Looking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enhanced Input", meta = (ALlowPrivateAccess = "true"))
	class UInputAction* Jumping;

protected:
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Mapping Context", meta = (ALlowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

};
