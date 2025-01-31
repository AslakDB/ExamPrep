// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_PlayerState.h"
#include "AbilitySystemComponent.h"

AGAS_PlayerState::AGAS_PlayerState()
{
	// Initialize the AbilitySystemComponent here if needed
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

UAbilitySystemComponent* AGAS_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}