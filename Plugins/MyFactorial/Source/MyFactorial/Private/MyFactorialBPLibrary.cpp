// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MyFactorialBPLibrary.h"
#include "MyFactorial.h"

UMyFactorialBPLibrary::UMyFactorialBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UMyFactorialBPLibrary::MyFactorialSampleFunction(float Param)
{
	return -1;
}

int32 UMyFactorialBPLibrary::Factorial(int32 num)
{
	int res = num;
	while (--num) {
		res *= num;
	}
	return res;
}

