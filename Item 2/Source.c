#include "Functions.h"
#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 2: Write and test a function that returns the sum of the largest and smallest elements of an array of doubles.
//Be sure to test(and include) all the edge cases you can think of to ensure your function works for all double variables.

//definitions
#define MAX_ARRAY_SIZE 5

int main(void)
{
	printf_s("Please enter 5 double values separated by spaces.\n>");										//prompt user for input

	double sum, inputs[MAX_ARRAY_SIZE];																		//create input array
																											//******TRY TO CHANGE THIS IF STATEMENT FOR BETTER INPUT CHECKING
	if (scanf_s("%lf %lf %lf %lf %lf", &inputs[0], &inputs[1], &inputs[2], &inputs[3], &inputs[4]) != 5)	//scan for user input and check if it is a double, and if it is, save it
	{
		printf("\nInput not recognised as double value, please try again.\n");								//if it is not a double, or there are not enough doubles, exit the program
		exit(1);
	}

	sum = SumOf(inputs);																					//calcuate sum of smallest and largest elements
	
	PrintInputs(inputs);																					//print outputs

	PrintSum(&sum);																							

	return 0;
}