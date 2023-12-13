#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int parseHex(const char* const hexString)
{
	int i,j= 0, k = 0, sum = 0, n = strlen(hexString);
	int num[100];
	for (i = 0; i < n; i++)
	{
		switch (hexString[i])
		{
		case 'A':num[j++] = 10; break;
		case 'B':num[j++] = 11; break;
		case 'C':num[j++] = 12; break;
		case 'D':num[j++] = 13; break;
		case 'E':num[j++] = 14; break;
		case 'F':num[j++] = 15; break;
		default:num[j++] = (int)(hexString[i] - '0'); break;
		}
	}
	for (i = n - 1; i >=0; i--)
	{
		sum += num[i] * pow(16, n - 1 - i);
		cout << "×ª»»½á¹û:" << sum << endl;
	}
	return 0;
}
int main()
{
	char hexString[10];
	cout << "Please enter number:";
	cin >> hexString;
	parseHex(hexString);
	return 0;
}



