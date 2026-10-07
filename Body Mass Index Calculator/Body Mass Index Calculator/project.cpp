#include <iostream>
using namespace std;

int main() 
{
	double weight = 0.0, height = 0.0, bmi = 0.0;

	cout << "Input your weight in kilograms:";
	cin >> weight;
	cout << "Input your height in meters:";
	cin >> height;

	bmi = weight / (height * height);

	cout << "Your BMI is: " << bmi << endl;

	if (bmi < 18.5)
		cout << "You are underweight." << endl;
	if (18.5 <= bmi && bmi <= 24.9)
		cout << "You are normal." << endl;
	if (25 <= bmi && bmi <= 29.9)
		cout << "You are overweight." << endl;
	if (bmi >= 30)
		cout << "You are obese." << endl;

	cout << "BMI VALUES\n" << "Underweight: less than 18.5\n"
		<< "Normal:      between 18.5 and 24.9\n" << "Overweight:  between 25 and 29.9\n"
		<< "Obese:       30 or greater";

	return 0;
}