#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int sin = 0, ten = 0, b = 0, k = 0, w = 0;
	
	cout << "Input a five-digit integer:" ;
	cin >> num;

	sin = num % 10;
	ten = (num % 100 - sin) / 10;
	b = (num % 1000 - ten) / 100;
	k = (num % 10000 - b) / 1000;
	w = (num - num % 10000) / 10000;

	cout << w << "   " << k << "   " << b << "   " << ten << "   " << sin << endl;

	return 0;
}