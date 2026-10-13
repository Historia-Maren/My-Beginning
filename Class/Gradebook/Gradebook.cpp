// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string cName, string iName)
	: courseName(cName),instructorName(iName) // member initializer to initialize courseName
{
	// empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string cName)
{
	courseName = cName; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
	return courseName; // return object's courseName
} // end function getCourseName

void GradeBook::setInstructorName(string iName)
{
	instructorName = iName;
}
string GradeBook::getInstructorName() const
{
	return instructorName; 
} 

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
	// call getCourseName to get the courseName
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
	cout << "This course is presented by: " << getInstructorName() << endl;
}