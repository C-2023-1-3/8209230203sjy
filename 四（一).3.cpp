#include<iostream>
using namespace std;
int main()
{
	bool L[100];
	for (int n = 0; n <= 99; n++)
	{
		L[n] = 1;
	}
	for (int i = 1; i <100; i++)
	{
		for (int j = i; j < 100; j = j + i + 1 + 1)//从对应的箱子开始
		{
			if (L[j] == 0)
			{
				L[j] = 1;
			}
			else 
			{
				L[j] = 0;
			}
			
		}
	}
	for (int m = 0; m <= 99; m++)
	{
		if (L[m])
		{
			cout << m+1 << " " ;
		}
	}
}