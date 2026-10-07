#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int mod = 0;

	cout << "Please input a integer:";
	cin >> num;

	mod = num % 2;

	if (mod == 0) 
		cout << "This is a Even." << endl;
	
	if (mod == 1) 
		cout << "This is a Odd."<< endl;
	

	return 0;
}