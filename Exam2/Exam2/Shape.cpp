#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "Input a integer: ";
	cin >> num;

	for (int i = 1; i < num + 1; ++i)
	{
		//空格数为整数减去第几行
		for (int g = 1; g <= num - i; ++g)
			cout << " ";
		//*数目为奇数且与第几行有关
		for (int m = 1; m <= 2 * i - 1; ++m)
			cout << "*";
		cout << endl;
	}
		
	cout << endl;

	return 0;
}