#include <iostream>
#include <string>
using namespace std;

class Gradebook
{
public:
	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName() const
	{
		return courseName;
	}
	void displayMassage()
	{
		cout << "Welcome to the grade book for\n" << getCourseName << "!" << endl;
	}

};