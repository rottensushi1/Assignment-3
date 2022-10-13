#include "..\Item 2\Functions.h"
#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 2: Write and test a function that returns the sum of the largest and smallest elements of an array of doubles.
//Be sure to test(and include) all the edge cases you can think of to ensure your function works for all double variables.

//tests

//definitions
#define MAX_ARRAY_SIZE 5

void main(void) 
{
	double expected, actual;
	double inputs[MAX_ARRAY_SIZE];

	printf("test 1 - ");			//5 whole numbers, smallest to largest in order	
	inputs[0] = 1;
	inputs[1] = 2;
	inputs[2] = 3;
	inputs[3] = 4;
	inputs[4] = 5;
	expected = 6;
	actual = SumOf(inputs);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 2 - ");			//5 whole numbers, largest to smallest in order	
	inputs[0] = 5;
	inputs[1] = 4;
	inputs[2] = 3;
	inputs[3] = 2;
	inputs[4] = 1;
	expected = 6;
	actual = SumOf(inputs);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");			

	printf("test 3 - ");			//combination of 5 whole positive/negative numbers 
	inputs[0] = 5;
	inputs[1] = 4;
	inputs[2] = -3;
	inputs[3] = -2;
	inputs[4] = 1;
	expected = -3 + 5;
	actual = SumOf(inputs);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 4 - ");			//combination of 5 positive whole/decimal numbers
	inputs[0] = 5.74;
	inputs[1] = 4.23;
	inputs[2] = 3.86;
	inputs[3] = 2.7;
	inputs[4] = 2.367;
	expected = 2.367 + 5.74;
	actual = SumOf(inputs);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 5 - ");			//combination of 5 +/- whole/decimal numbers
	inputs[0] = 2.74;
	inputs[1] = -4;
	inputs[2] = -3.6;
	inputs[3] = 2;
	inputs[4] = 1.2;
	expected = -4 + 2.74;
	actual = SumOf(inputs);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");
}