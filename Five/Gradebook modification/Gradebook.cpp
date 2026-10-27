#include<iostream>
#include "Gradebook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;
}

void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	else
	{
		courseName = name.substr(0, 25);
		cout << "Name \"" << name << "\"exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
}

void GradeBook::inputGrades()
{
	int grade;
	cout << "\nEnter the letter grades." << endl
		<< "Enter the EOF character to end input." << endl;
	while ((grade = cin.get()) != EOF)
	{
		switch (grade)
		{
		case 'A':
		case 'a':
			++aCount;
			break;
		case 'B':
		case 'b':
			++bCount;
			break;
		case 'C':
		case 'c':
			++cCount;
			break;
		case 'D':
		case 'd':
			++dCount;
			break;
		case 'F':
		case 'f':
			++fCount;
			break;
		case '\n':
		case'\t':
		case ' ':
			break;
		default:
			cout << "Incorrect letter grade entered."
				<< "Enter a new grade" << endl;
			break;
		}
	}
}

void GradeBook::displayGradeReport()
{
	cout << "\n\nNumber of students who received each letter grade:"
		<< "\nA: " << aCount << "\nB: " << bCount
		<< "\nC: " << cCount << "\nD: " << dCount
		<< "\nF: " << fCount << endl;

	int totalStudents = aCount + bCount + cCount + dCount + fCount;
	if (totalStudents > 0)
	{
		double totalPoints = (aCount * 4) + (bCount * 3) + (cCount * 2) + (dCount * 1);
		double gpa = totalPoints / totalStudents;

		cout << "Grade Point Average: " << gpa << endl;
	}
	else
		cout << "No grades were entered." << endl;
}