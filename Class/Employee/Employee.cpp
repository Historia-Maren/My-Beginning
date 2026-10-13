#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string fname, string lname, int msalary)
	:firstName(fname), lastName(lname)
{
	setMonthlySalary(msalary);
}
void Employee::setFirstName(string fname)
{
	firstName = fname;
}
string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setLastName(string lname)
{
	lastName = lname;
}
string Employee::getLastName() const
{
	return lastName;
}

void Employee::setMonthlySalary(int msalary)
{
	if (msalary > 0)
		monthlySalary = msalary;
	else
		monthlySalary = 0;
}
int Employee::getMonthlySalary() const
{
	return monthlySalary;
}