/* * 文件名: modify.cpp
* 作者: 陈子晞
* 学号: 202630554327
* 日期: 2026-10-26
* 实验名称: 实验2 - 控制结构
* 任务描述: 修复给定的错误代码，使其能够正确编译运行，并输出预期结果 */
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main()
{
	int i, j;
	double a;
	double b;

	cout << setprecision(2);

	for (i = 1; i <= 2; i++)
	{
		cout << "i is now equal to " << i << endl;

		for (j = 0; j <= 3; j++)
		{
			cout << "\tj is now equal to " << j << endl;

			cout << "\t\ti + j = " << i + j << "\ti - j = "<< i - j << endl;
			cout << "\t\ti * j = " << i * j << "\ti ^ j = " << pow(i, j) << endl;

			if (j == 0)
				continue;
			else
			{
				a = i;
				b = j;
				cout << "\t\ti / j = " << a / b << "\ti % j = " << i % j << endl;
			}
		} // end for
	}
	
	cout << "\nThe final values of i and j are: " << i << " and " << j << endl;
} // end main