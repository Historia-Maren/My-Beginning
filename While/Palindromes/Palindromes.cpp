#include<iostream>
using namespace std;

int num, a, b, d, e;

int main()
{
	cout << "Input a five-digit integer: ";
	cin >> num;

	a = num / 10000;
	b = (num / 1000) % 10;
	d = (num / 10) % 10;
	e = num % 10;

	if (a == e && b == d)
		cout << "This is a Palindrome." << endl;
	else
		cout << "This is not a Palindrome." << endl;

	return 0;
}