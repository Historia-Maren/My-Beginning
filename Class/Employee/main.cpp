#include <iostream>
#include"Employee.h"
using namespace std;

int main()
{
	Employee p1("Hans", "Zoe", 50000);
	Employee p2("Levi", "Ackerman", 30000);

	cout << "初始年薪" << endl;
	cout << p1.getFirstName() << p1.getLastName() << "的年薪是：$" << p1.getMonthlySalary() * 12 << endl;
	cout << p2.getFirstName() << p2.getLastName() << "的年薪是：$" << p2.getMonthlySalary() * 12 << endl;

	p1.setMonthlySalary(p1.getMonthlySalary() * 1.1);
	p2.setMonthlySalary(p2.getMonthlySalary() * 1.1);
	
	cout << "加薪后的年薪" << endl;
	cout << p1.getFirstName() << p1.getLastName() << "的年薪是：$" << p1.getMonthlySalary() * 12 << endl;
	cout << p2.getFirstName() << p2.getLastName() << "的年薪是：$" << p2.getMonthlySalary() * 12 << endl;

	return 0;
}