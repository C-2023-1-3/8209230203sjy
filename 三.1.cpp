#include<iostream>
using namespace std;
unsigned int g,l;
void gcd(unsigned int m,unsigned int n)//�����Լ������
{
	unsigned min;
	if (m <= n)
	{
		min = m;
	}
	else if (m > n)
	{
		min = n;
	}
	for (min;;min--)
	{
		if ((m % min == 0)&&(n % min == 0))
		{
			g = min;
			break;
		}
		
	}
}
void gcdlcm(unsigned int& m, unsigned int& n)//�����Լ������С������
{
	unsigned max;//����С������
	if (m <= n)
	{
		max = n;
	}
	else if (m > n)
	{
		max = m;
	}
	for (max;; max++)
	{
		if (max%m==0&&max%n==0)
		{
			l = max;
			break;
		}

	}
	unsigned min;//�����Լ��
	if (m <= n)
	{
		min = m;
	}
	else if (m > n)
	{
		min = n;
	}
	for (min;; min--)
	{
		if ((m % min == 0) && (n % min == 0))
		{
			g = min;
			break;
		}

	}
}
int main()
{
	unsigned int m = 0, n = 0;
	cout << "Enter the values of the natural numbers m and n:" << endl;
	cin >> m >> n;
	gcd(m, n);
	cout << "The greatest common divisor is:" <<g<< endl;
	gcdlcm(m, n);
	cout << "The least common multiple is:" << l << endl;
}