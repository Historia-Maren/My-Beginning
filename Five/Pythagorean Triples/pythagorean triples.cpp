#include<iostream>
using namespace std;

int main()
{
	int side1, side2, hypotenuse, count=0;

	for (side1 = 1; side1 <= 500;side1++)
	{
		for (side2 = side1; side2 <= 500; side2++)
		{
			for (hypotenuse = side2; hypotenuse <= 500;hypotenuse++)
			{
				if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
				{
					count += 1;
					cout << count << "." << side1 << " " << side2 << " " << hypotenuse << endl;
				}
			}
		}
	}

	return 0;
}