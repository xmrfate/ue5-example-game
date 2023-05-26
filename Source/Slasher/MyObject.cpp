// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

UMyObject::UMyObject() {

}

UMyObject::~UMyObject() {

}

void UMyObject::myFunction() {
	UE_LOG(LogTemp, Warning, TEXT("This is a warning log message."))
}