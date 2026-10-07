#include <iostream>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	int sum = 0, average = 0, product = 0, smallest = 0, largest = 0;

	cout << "Input three different integers:";
	cin >> num1 >> num2 >> num3;

	product = num1 * num2 * num3;
	sum = num1 + num2 + num3;
	average = sum / 3;

	smallest = largest = num1;
	if (num2 < smallest) 
		smallest = num2;

	if (num3 < smallest) 
		smallest = num3;

	if (num2 > largest) 
		largest = num2;
	
	if (num3 > largest) 
		largest = num3;

	cout << "Sum is " << sum << "\n";
	cout << "Average is " << average << "\n";
	cout << "Product is " << product << "\n";
	cout << "Smallest is " << smallest << "\n";
	cout << "Largest is " << largest << "\n";

	return 0;
}