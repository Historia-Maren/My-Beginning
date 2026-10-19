#include<iostream>
#include<iomanip>
using namespace std;

float sales = 0.00, salary = 0.00;

int main()
{
	cout << "Enter sales in dollars (-1 to end): " ;		
	cin >> sales;

	while (sales != -1)
	{
		salary = sales * 0.09 + 200.00;
		cout << setprecision(2) << fixed;
		cout << "Salary is: " << salary << endl;
		salary = 0.00;

		cout << "\nEnter sales in dollars (-1 to end): ";
		cin >> sales;
	}
		
	return 0;
}