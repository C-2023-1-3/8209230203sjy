
#include<iostream>
using namespace std;
int main()
{
	unsigned int a, b;
	unsigned int x,y;
	unsigned int max = 0, min = 0;
	cout << "Please enter two positive integers:" << endl;
	cin >> x>> y;
	if (x >= y)
	{
		a = x;
		b = y;
	}
	else
	{
		a = y;
		b = x;
	}
	//求最大公约数
	for (int c = 1; c <= b; c++)
	{
		if (a % c == 0 && b % c == 0)
		{
			max = c;
		}
	}
	cout << "The greatest common divisor is:" <<max<< endl;
	//求最小公倍数
	for (int d = a; d <= b*a; d++)
	{
		if (d % a == 0 && d% b == 0)
		{
			min = d;
			break;
		}
	}
	cout << "The least common multiple is:" << min<< endl;

}