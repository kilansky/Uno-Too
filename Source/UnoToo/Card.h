// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.generated.h"

UENUM(BlueprintType)
enum class ECardColor : uint8
{
	None,
	Red,
	Yellow,
	Greem,
	Blue
};

UENUM(BlueprintType)
enum class ESpecialCardType : uint8
{
	None,
	Reverse,
	Draw2,
	Skip,
	Wild,
	Wild_Draw4
};


UCLASS()
class UNOTOO_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

	//public values found on card
	UPROPERTY(EditAnywhere, Category = "Card Info")
	bool isSpecialCard;

	UPROPERTY(EditAnywhere, Category = "Card Info")
	int cardNumber;

	UPROPERTY(EditAnywhere, Category = "CardInfo")
	TEnumAsByte<ECardColor> cardColor;

	UPROPERTY(EditAnywhere, Category = "CardInfo")
	TEnumAsByte<ESpecialCardType> cardType;

	//widget
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	//	TSubclassOf<class UUserWidget> WidgetInstance;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
