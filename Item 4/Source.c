#include "Student.h"
#include <stdio.h>

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

//definitions
#define STUDENTNUMSIZE	10
#define NAMESIZE		20
#define MAXSTUDENTS		5

int main(void)
{
	int studentCount = 0;																	//create student counter
	struct studentInfo students[MAXSTUDENTS];												//create student structure array

	while (studentCount < 5)																//while there are less than 5 students, create a student
	{
		double year[4], month[2], code[4];													//store year, month, and code
		//*TODO get and save student num inputs (birth year, month, 4 digit code)

		double* studentNumber[] = GetStudentNumber(year, month, code);						//create student num from inputs
		
		char* firstName[NAMESIZE], middleName[NAMESIZE], lastName[NAMESIZE];				//store names
		//*TODO get student name inputs

		struct studentName studentName = GetStudentName(firstName, middleName, lastName);	//create student name stucture from inputs
		
		students[studentCount] = CreateStudent(studentNumber, studentName);					//create student structure and add to student array

		studentCount++;
	}

	PrintStudents(students);																//call print function to print all students from array

	return 0;
}