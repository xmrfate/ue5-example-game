// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SLASHER_API UMyObject : public UObject
{
	GENERATED_BODY()

public:
	UMyObject();

	~UMyObject();

	UPROPERTY(BlueprintReadOnly, Category="MyVariables")
	float my_float_{ 0 };

	UFUNCTION(BlueprintCallable, Category="MyFunctions")
	void myFunction();
	
};
