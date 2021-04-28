// Fill out your copyright notice in the Description page of Project Settings.


#include "Card.h"
#include "Blueprint/UserWidget.h"

// Sets default values
ACard::ACard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	isSpecialCard = false;
	cardNumber = -1;
	cardColor = ECardColor::None;
	cardType = ESpecialCardType::None;
}

// Called when the game starts or when spawned
void ACard::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

