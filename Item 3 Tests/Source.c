#include "..\Item 3\Functions.h"
#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 3: Write and test a function named MultiplyTwoArraysIntoThird that sets each element in an array to the product of the corresponding elements in 
//two other arrays. For example, if array 1 has the values { 2, 4, 5, 8 } and array 2 has the values { 1, 0, 4, 6 }, the function should assign array 3 the 
//values { 2, 0, 20, 48 } . The arrays should be sent as function parameters. Be sure to include all the tests you performed to demonstrate that this 
//function works as specified.

//tests

//definitions

#define MAX_ARRAY_SIZE 4

void main(void)
{
	double inputs1[MAX_ARRAY_SIZE], inputs2[MAX_ARRAY_SIZE], expected[MAX_ARRAY_SIZE], actual[MAX_ARRAY_SIZE];

	printf("\ntest 1 - ");			//2 arrays holding 4 whole, positive numbers
	//array1
	inputs1[0] = 1;
	inputs1[1] = 2;
	inputs1[2] = 3;
	inputs1[3] = 4;
	//array2
	inputs2[0] = 1;
	inputs2[1] = 2;
	inputs2[2] = 3;
	inputs2[3] = 4;
	//product
	expected[0] = inputs1[0] * inputs2[0];
	expected[1] = inputs1[1] * inputs2[1];
	expected[2] = inputs1[2] * inputs2[2];
	expected[3] = inputs1[3] * inputs2[3];
	MultiplyTwoArraysIntoThird(inputs1, inputs2, actual);
	for (int i = 0; i < MAX_ARRAY_SIZE; i++) 
	{
		if (expected[i] == actual[i])
			printf("pass at [%d], ", i);
		else
			printf("fail at [%d], ",i);
	}
	printf("\n");

	printf("\ntest 2 - ");			//2 arrays holding combinations of 4 whole, positive or negative numbers
	//array1
	inputs1[0] = -6;
	inputs1[1] = 62;
	inputs1[2] = -5;
	inputs1[3] = 1;
	//array2
	inputs2[0] = 7;
	inputs2[1] = 3;
	inputs2[2] = -3;
	inputs2[3] = 4;
	//product
	expected[0] = inputs1[0] * inputs2[0];
	expected[1] = inputs1[1] * inputs2[1];
	expected[2] = inputs1[2] * inputs2[2];
	expected[3] = inputs1[3] * inputs2[3];
	MultiplyTwoArraysIntoThird(inputs1, inputs2, actual);
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		if (expected[i] == actual[i])
			printf("pass at [%d], ", i);
		else
			printf("fail at [%d], ", i);
	}
	printf("\n");

	printf("\ntest 3 - ");			//2 arrays holding combinations of 4 whole or decimal, positive or negative numbers
	//array1
	inputs1[0] = -6.72;
	inputs1[1] = 62.6;
	inputs1[2] = -5;
	inputs1[3] = 1;
	//array2
	inputs2[0] = -7.32;
	inputs2[1] = 3;
	inputs2[2] = 3.24;
	inputs2[3] = 4;
	//product
	expected[0] = inputs1[0] * inputs2[0];
	expected[1] = inputs1[1] * inputs2[1];
	expected[2] = inputs1[2] * inputs2[2];
	expected[3] = inputs1[3] * inputs2[3];
	MultiplyTwoArraysIntoThird(inputs1, inputs2, actual);
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		if (expected[i] == actual[i])
			printf("pass at [%d], ", i);
		else
			printf("fail at [%d], ", i);
	}
	printf("\n");
}