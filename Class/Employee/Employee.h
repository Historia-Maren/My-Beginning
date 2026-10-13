#include <string>
using namespace std;

class Employee
{
private:
	string firstName;
	string lastName;
	int monthlySalary;

public:
	explicit Employee(string, string, int);

	void setFirstName(string);
	string getFirstName() const;

	void setLastName(string);
	string getLastName() const;

	void setMonthlySalary(int);
	int getMonthlySalary() const;
};