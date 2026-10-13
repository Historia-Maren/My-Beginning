#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date(int m, int d, int y)
	{
		setMonth(m);
		day = d;
		year = y;
	}
	void setMonth(int m)
	{
		if (m >= 1 && m <= 12)
			month = m;
		else
			month = 1;
	}
	int getMonth() const
	{
		return month;
	}
	void setDay(int d)
	{
		day = d;
	}
	int getDay() const
	{
		return day;
	}
	void setYear(int y)
	{
		year = y;
	}
	int getYear()
	{
		return year;
	}
	void displayDate()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
};

int main()
{
	cout << "测试正常日期" << endl;
	Date datel(10, 13, 2026);
	datel.displayDate();

	cout << "测试非法日期" << endl;
	Date date2(13, 13, 2026);
	date2.displayDate();

	cout << "测试修改日期" << endl;
	datel.setMonth(12);
	datel.setDay(13);
	datel.setYear(2027);
	datel.displayDate();

	return 0;
}