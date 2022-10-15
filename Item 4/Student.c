#include "Student.h"

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 4: Create a structure template with two members according to the following criteria:
//	1. The first member is a student number as a single fixed length field following the format of 10 digits: YYYYMMwxyz 
//		YYYY = birthyear, MM = birth month, wxyz = random 4 digit code).
//	2. the second member is a structure with three members according to the following criteria:
//		– ”first name”
//		– ”middle name”
//		– ”last name”
//Write and test a program that creates and initializes an array of five of these structures (Please make up pretend names / numbers for your 5 students - 
//be sure to have at least 2 students with middle names (and the full middle name must be entered) and at least 1 without any middle name. 
//Write a single function that accepts the array of structures as a parameter for printing the array data in the following format:
//2001041234 – LastName, FirstName MiddleInitial. Note that only the initial of the middle name should be printed, followed by a period.
//Any of your students who lack a middle name will end the output line at the end of the first name.

//implementation of student utils

//definitions
#define STUDENTNUMSIZE	10
#define NAMESIZE		20
#define MAXSTUDENTS		5

void CreateStudent(double* stuNum, double students[], double* studentCount, char* firstName[], char* middleName[], char* lastName[])
{
	STUDENTNAME  student = { firstName, middleName, lastName };
}

double GetStudentNumber(double year[], double month[], double code[])
{
	double stuNum = year[0] * 1000000000 +
		year[1] * 100000000 +
		year[2] * 10000000 +
		year[3] * 1000000 +
		month[0] * 100000 + 
		month[1] * 10000 + 
		code[0] * 1000 + 
		code[1] * 100 + 
		code[2] * 10 +
		code[3];

	return stuNum;
}

void GetStudentName(char* firstName[], char* middleName[], char* lastName[])
{

}

void PrintStudents(struct studentInfo* students[])
{
	for (int i = 0; i < MAXSTUDENTS; i++)			//run 5 times, to print all students
	{
		
	}
}