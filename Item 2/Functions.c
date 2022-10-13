#include "Functions.h"

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 2: Write and test a function that returns the sum of the largest and smallest elements of an array of doubles.
//Be sure to test(and include) all the edge cases you can think of to ensure your function works for all double variables.

//Implementation of Function Library

//definitions
#define MAX_ARRAY_SIZE 5

double SumOf(double array[])									//return the sum of the largest and smallest elements of an array of doubles
{
	double sum;													//initialize variables
	double smallestValue = array[0], largestValue = array[0];	//initialize both smallest and largest value as first array element in order to create 
																//reference to check other elements against

	for (int i = 0; i < MAX_ARRAY_SIZE; i++)					//for loop to save largest/smallest values to variables
	{
		if (array[i] < smallestValue)
			smallestValue = array[i];
		else if (array[i] > largestValue)
			largestValue = array[i];
	}

	sum = smallestValue + largestValue;							//calculate and return sum of smallest and largest value

	return sum;
}

void PrintInputs(double array[])
{
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		printf("\nInput[%d] = %lf\n", i + 1, array[i]);			//print original array values		
	}
}

void PrintSum(double* x)
{
	printf("\nSum = %lf\n", *x);								//print sum of values
}