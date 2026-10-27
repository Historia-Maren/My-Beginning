#include<string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string);
	void setCourseName(string);
	string getCourseName();
	void displayMessage();
	void inputGrades();
	void displayGradeReport();
private:
	string courseName;
	int aCount, bCount, cCount, dCount, fCount;
};
