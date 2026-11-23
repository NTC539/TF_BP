#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CharacterAttributes.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class UCharacterAttributes : public UAttributeSet
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData JumpSpeed;
	ATTRIBUTE_ACCESSORS(UCharacterAttributes, JumpSpeed)
  
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData BaseMoveSpeed;
	ATTRIBUTE_ACCESSORS(UCharacterAttributes, BaseMoveSpeed)
  
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData JumpCount;
	ATTRIBUTE_ACCESSORS(UCharacterAttributes, JumpCount)
  
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData SlideImpulse;
	ATTRIBUTE_ACCESSORS(UCharacterAttributes, SlideImpulse)
 };
