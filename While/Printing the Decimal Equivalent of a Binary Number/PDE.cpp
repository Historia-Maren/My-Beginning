#include<iostream>
using namespace std;

int numb, numd, digit;
int value = 1;

int main()
{
	cout << "Input a binary integer: ";
	cin >> numb;

	while (numb > 0)
	{
		digit = numb % 10;
		numd += value * digit;

		numb /= 10;
		value *= 2;
	}
	
	cout << "Decimal integer is: " << numd << endl;

	return 0;
}
