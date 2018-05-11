// Fill out your copyright notice in the Description page of Project Settings.

#include "QuaternionLibrary.h"

FVector UQuaternionLibrary::QuaternionToEuler(FQuat quat) 
{
	return quat.Euler();
}

FRotator UQuaternionLibrary::QuaternionToRotator(FQuat quat)
{
	return quat.Rotator();
}

FQuat UQuaternionLibrary::QuaternionFromEuler(FRotator euler)
{
	return FQuat(euler);
}

FQuat UQuaternionLibrary::QuaternionFromTo(FVector start, FVector end)
{
	return FQuat().FindBetweenVectors(start, end);
}

FVector UQuaternionLibrary::RotateVector(FQuat rotation, FVector vector)
{
	return rotation.RotateVector(vector);
}

FQuat UQuaternionLibrary::AddQuaternions(FQuat quat1, FQuat quat2)
{
	return quat1 + quat2;
}

FQuat UQuaternionLibrary::MultiplyQuaternions(FQuat quat1, FQuat quat2)
{
	return quat1 * quat2;
}

