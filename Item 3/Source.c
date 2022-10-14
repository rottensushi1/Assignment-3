#include "Functions.h"
#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 3: Write and test a function named MultiplyTwoArraysIntoThird that sets each element in an array to the product of the corresponding elements in 
//two other arrays. For example, if array 1 has the values { 2, 4, 5, 8 } and array 2 has the values { 1, 0, 4, 6 }, the function should assign array 3 the 
//values { 2, 0, 20, 48 } . The arrays should be sent as function parameters. Be sure to include all the tests you performed to demonstrate that this 
//function works as specified.

//definitions

#define MAX_ARRAY_SIZE 4
int main(void)
{
	double* inputs1[MAX_ARRAY_SIZE], inputs2[MAX_ARRAY_SIZE], products[MAX_ARRAY_SIZE];
	//create and assign values to arrays (get double input values)

	//send arrays to function (3 arrays, 2 source 1 destination)
	
	MultiplyTwoArraysIntoThird(&inputs1, &inputs2, &products);

	//return third array containing product of array elements

	return 0;
}