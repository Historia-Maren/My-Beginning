#include<iostream>
using namespace std;

int main()
{
	int count, num;
	int sum = 0;

	cout << "Enter the number of values followed by the values: ";
	cin >> count;

	for (int i = 1; i <= count; i += 1)
	{
		cin >> num;
		sum += num;
	}
		sum += num;

	cout << "Sum is: " << sum << endl;

	return 0;
}