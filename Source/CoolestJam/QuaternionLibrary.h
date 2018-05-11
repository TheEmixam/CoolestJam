// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuaternionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class COOLESTJAM_API UQuaternionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category="Quaternion")
	static FVector QuaternionToEuler(FQuat quat);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FRotator QuaternionToRotator(FQuat quat);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FQuat QuaternionFromEuler(FRotator euler);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FQuat QuaternionFromTo(FVector start, FVector end);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FVector RotateVector(FQuat rotation, FVector vector);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FQuat AddQuaternions(FQuat quat1, FQuat quat2);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FQuat MultiplyQuaternions(FQuat quat1, FQuat quat2);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FQuat InverseQuaternion(FQuat quat);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FVector GetQuaternionUpVector(FQuat quat);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FVector GetQuaternionForwardVector(FQuat quat);
	UFUNCTION(BlueprintPure, Category = "Quaternion")
		static FVector GetQuaternionRightVector(FQuat quat);
};
