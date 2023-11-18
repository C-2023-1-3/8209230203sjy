
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//主要任务+问题1：
	int a;
	double x = 1.0, x1;
	string str = "i";
	cout << "Please enter a number:" << endl;
	cin >> a;
    if (a < 0)
	{
		double b = -a;
		do
		{
			x1 = x;
			x = (x1 + b / x1) / 2;
		} while (fabs(x - x1) > 1E-5);
		cout << "The square root of a is:" << x <<str<<endl;
	}
	if (a >= 0)
	{
		double b = a;
		do
		{
			x1 = x;
			x = (x1 + b / x1) / 2;
		} while (fabs(x - x1) > 1E-5);
		cout << "The square root of a is:" << x << endl;
	}


	//问题二：
	cout << "Please enter a number:" << endl;
	cin >> a;
	if (a < 0)
	{
		double b = -a;
		do
		{
			x1 = x;
			x = (x1 + b / x1) / 2;
		} while (fabs(x - x1) > 1E-5);
		cout << "The square root of a is:" << x << str << endl;
	}
	if (a >= 0)
	{
		double b = a;
		do
		{
			x1 = x;
			x = (x1 + b / x1) / 2;
		} while (fabs(x - x1) > 1E-10);
		cout << "The square root of a is:" << x << endl;
	}
	return 0;
	//答：无法实现，超过了float的长度。
}
