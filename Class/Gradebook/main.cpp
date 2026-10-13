#include <iostream>
#include "Gradebook.h"
using namespace std;

int main()
{
	GradeBook myGradebook("CS101 Introduction to C++", "Professor Smith");

	cout << "初始状态" << endl;
	myGradebook.displayMessage();

	cout << "\n修改讲师后" << endl;
	myGradebook.setInstructorName("Dr.Mike");
	myGradebook.displayMessage();

	return 0;
}