#include "Functions.h"
#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 1: Write and test a function called SmallerOf() that replaces the contents of two double variables with the smaller of the two values. 
//For example, SmallerOf(x, y) would reset both x and y to the smaller of the two. Be sure to test(and include) all the edge cases you can think of 
//to ensure your function works for all double variables.

int main(void)
{
	printf_s("Please enter 2 double values separated by a space.\n>");			//prompt user for input

	double a, b;

	if (scanf_s("%lf %lf", &a, &b) != 2)										//scan for user input and check if it is a double, and if it is, save it
	{
		printf("\nInput not recognised as a double, please try again.\n");		//if it is not a double, exit the program
		exit(1);
	}

	printf_s("\nOriginal: a = %lf b = %lf\n", a, b);							//print original values

	SmallerOf(&a, &b);															//set both values to smaller of the 2 

	printf_s("\nSmaller: a = %lf b = %lf\n", a, b);								//print smaller values

	return 0;
}