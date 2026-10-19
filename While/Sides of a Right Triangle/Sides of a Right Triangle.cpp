#include<iostream>
using namespace std;

int a, b, c;

int main()
{
	cout << "Input three nonzero integers: ";
	cin >> a >> b >> c;

	if (a > 0 && b > 0 && c > 0)
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a* a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
				cout << "This is a right triangle." << endl;
			else
				cout << "This is not a right triangle." << endl;
		}
		else
			cout << "This is not a triangle." << endl;
	}
	else
		cout << "Please input right integers." << endl;

	return 0;
}