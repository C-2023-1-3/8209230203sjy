#include<iostream>
using namespace std;
int r(int day)
{
	if (day == 10)
	{
		return 1;
	}
	else 
	{
		return 2 * r(day + 1) + 2;
	}
}
int main()
{
	int sum;
	sum = r(1);
	cout << "The number of peaches the monkey picked on the first day was:" << sum << endl;
}