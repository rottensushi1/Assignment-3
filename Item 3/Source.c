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
	double inputs1[MAX_ARRAY_SIZE], inputs2[MAX_ARRAY_SIZE], products[MAX_ARRAY_SIZE];			//create arrays and get double input values

	printf("Please enter 4 double values separated by spaces\n>");								//prompt user for inputs

	if (scanf_s("%lf %lf %lf %lf", &inputs1[0], &inputs1[1], &inputs1[2], &inputs1[3]) != 4)	//scan for user input and check if it is a double, and if it is, save it
	{
		printf("\nInput not recognised as double value, please try again.\n");					//if it is not a double, or there are not enough doubles, exit the program
		exit(1);
	}

	printf("Please enter 4 more double values separated by spaces\n>");							//prompt user for second set of inputs

	if (scanf_s("%lf %lf %lf %lf", &inputs2[0], &inputs2[1], &inputs2[2], &inputs2[3]) != 4)	//scan for user input and check if it is a double, and if it is, save it
	{
		printf("\nInput not recognised as double value, please try again.\n");					//if it is not a double, or there are not enough doubles, exit the program
		exit(1);
	}

	MultiplyTwoArraysIntoThird(inputs1, inputs2, products);										//send arrays to function (3 arrays, 2 source 1 destination)

	PrintArray(products);																		//display products

	return 0;
}