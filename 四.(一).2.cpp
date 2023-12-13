#include<iostream>
using namespace std;
void bubblesort(double arry[10])
{
	bool changed = true;
	double temp = 0;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (arry[j] > arry[j + 1])
			{
				temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed==true);
}
int main()
{
	double num[10];
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >> num[i];
	}
	bubblesort(num);
	cout << "The bubble arry is:" << endl;
	for (int j = 0; j < 10; j++)
	{
		cout << num[j]<<"  ";
	}
}
