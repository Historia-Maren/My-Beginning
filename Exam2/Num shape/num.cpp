/* * 文件名: num.cpp
* 作者: 陈子晞
* 学号: 202630554327
* 日期: 2026-10-26
* 实验名称: 实验2 - 控制结构
* 任务描述: 输入一个整数n，输出n×n的数字矩阵 */
#include <iostream>
using namespace std;

int main()
{
	int num, k;

	cout << "Input a integer: ";
	cin >> num;
	
	//利用k作为计数器计算出需要输出的数字
	for (int i = 1; i <= num; i++)
	{
		k = i;

		for ( int m = 1; m <= num; m++)
		{
			
			cout << k << " ";
			k += 1;
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
