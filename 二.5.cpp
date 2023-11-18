#include<iostream>
using namespace std;
int main()
{
	char c;
	int e = 0;//英文字母个数
	int num = 0;//数字字符个数
	int s = 0;//空格个数
	int oth = 0;//其他字符个数
	cout << "Please enter a line of characters:" << endl;
	cin.get(c);
	while (c != '\n')
	{
		if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
		{
			e++;
		}
		else if (c >= '0' && c <= '9')
		{
			num++;
		}
		else if (c == ' ')
		{
			s++;
		}
		else
		{
			oth++;
		}
		cin.get(c);
	}
	cout << "The number of letters in English is:" << e << endl;
	cout << "The number of numeric characters is:" << num << endl;
	cout << "The number of Spaces is:" << s<< endl;
	cout << "The number of other characters is:" << oth << endl;
}

