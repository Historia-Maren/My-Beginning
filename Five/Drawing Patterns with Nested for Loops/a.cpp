#include<iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{   //a
		for (int m = 0; m <= i; m++)
		{
			cout << "*";
		}
        for (int n = 0; n < 9 - i; n++)
		{
			cout << " ";
		}
		cout << " ";
		//b
		for (int o = 0; o < 10 - i; o++)
		{
			cout << "*";
		}
		for (int u = 0; u <= i; u++)
		{
			cout << " ";
		}
		cout << " ";
		//c
		for (int p = 0; p <= i; p++)
		{
			cout << " ";
		}
		for (int q = 0; q < 10 - i; q++)
		{
			cout << "*";
		}
		cout << " ";
		//d
		for (int r = 0; r < 10 - i; r++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}