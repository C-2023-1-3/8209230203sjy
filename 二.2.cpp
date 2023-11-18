#include<iostream>
using namespace std;
int main()
{
	float y = 0.0, x = 0.0;
	cout << "Please enter the value of x:" << endl;
	cin >> x;
	if (0 < x && 1 > x)
	{
		float c = (-2) * x;
		y = 3 + c;
		cout << "The calculation results are as follows:" << y<<endl;
	}
	if (x >= 1 && x < 5)
	{
		float c = 4 * x;
		y = 2 / c + 1;
		cout << "The calculation results are as follows:" << y << endl;
	}
	if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "The calculation results are as follows:" << y << endl;
	}

}