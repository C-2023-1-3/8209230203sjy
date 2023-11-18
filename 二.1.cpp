#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout << "Please enter the letter:" << endl;
	cin >> ch;
	if (islower(ch))
	{
		ch = toupper(ch);
		cout << "To convert the letter to uppercase is:" << ch << endl;
	}
	else
	{
		int x = int(ch);
		int y = ++x;
		cout << "The ASCII code for the character following the letter is:" <<y<< endl;
	}
}