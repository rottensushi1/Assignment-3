#include "Functions.h"

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 3: Write and test a function named MultiplyTwoArraysIntoThird that sets each element in an array to the product of the corresponding elements in 
//two other arrays. For example, if array 1 has the values { 2, 4, 5, 8 } and array 2 has the values { 1, 0, 4, 6 }, the function should assign array 3 the 
//values { 2, 0, 20, 48 } . The arrays should be sent as function parameters. Be sure to include all the tests you performed to demonstrate that this 
//function works as specified.

//Implementation of Function Library
#define MAX_ARRAY_SIZE 4

void MultiplyTwoArraysIntoThird(double* array1, double* array2, double* productArray)
{
	for (int i = 0; i < MAX_ARRAY_SIZE; i++) 
	{
		productArray[i] = array1[i] * array2[i];
	}
}

void PrintArray(double* array1)
{
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		printf("\nProduct of element %d from each array: %lf\n", i + 1, array1[i]);
	}
}