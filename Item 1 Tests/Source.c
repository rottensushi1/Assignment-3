#include "../Item 1/Functions.h"
#include <stdio.h>

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 1: Write and test a function called SmallerOf() that replaces the contents of two double variables with the smaller of the two values. 
//For example, SmallerOf(x, y) would reset both x and y to the smaller of the two. Be sure to test(and include) all the edge cases you can think of 
//to ensure your function works for all double variables.

//Tests

void main(void)
{
	double expected, actual;
	double x = 1, y = 2;			//initialize as test case 1

	printf("test 1 - ");
	expected = 1;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");


}