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

	printf("test 1 - ");			//2 positive, whole numbers
	expected = 1;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 2 - ");			//1 positive, 1 negative whole numbers
	x = 5;
	y = -6;
	expected = -6;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 3 - ");			//2 negative whole numbers
	x = -9;
	y = -6;
	expected = -9;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 4 - ");			//2 positive decimal numbers
	x = 5.45;
	y = 5.34;
	expected = 5.34;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 5 - ");			//1 positive, 1 negative decimal numbers
	x = 5.7;
	y = -6.4;
	expected = -6.4;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 6 - ");			//2 negative decimal numbers
	x = -7.5;
	y = -6.9;
	expected = -7.5;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 7 - ");			//1 decimal 1 whole number
	x = 5;
	y = 6.567;
	expected = 5;
	actual = SmallerOf(&x, &y);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

}