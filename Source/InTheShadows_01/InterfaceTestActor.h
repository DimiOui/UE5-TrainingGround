// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "InterfaceTestActor.generated.h"

UCLASS()
class INTHESHADOWS_01_API AInterfaceTestActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInterfaceTestActor();


protected:
	UPROPERTY(EditAnywhere, Category = "TestActor")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditInstanceOnly, Category = "TestActor")
	FInteractableData InstanceInteractableData;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BeginFocus() override;
	virtual void EndFocus() override;
	virtual void BeginInteract() override;
	virtual void EndInteract() override;
	virtual void Interact(AGameCharacterTwo* GameCharacterTwo) override;
};
