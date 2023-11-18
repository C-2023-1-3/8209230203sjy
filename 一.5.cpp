#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F = 0.0;
	cout << "Please enter the temperature in Fahrenheit:" << endl;
	cin >> F;
	double C = 0.0;
	C = (F - 32.0) / 1.8;
	cout << "Convert to Celsius temperature is:" << endl;
	cout<< fixed << setprecision(2) << C <<"¡æ" << endl;
}