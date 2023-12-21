#include<iostream>
using namespace std;
class Time             
{
private:              
	int hour=0;
	int minute=0;
	int sec=0;
public:
	void input()
	{
		cout << "Please enter the current hours:";
		cin >> hour;
		cout << "Please enter the minutes:";
		cin >> minute;
		cout << "Please enter the seconds:";
		cin >> sec;
	};
	void print()
	{
		cout << "The current time is:" << endl;
		cout << hour << ":" << minute << ":" << sec << endl;
	};
};
int main()
{
	Time t;  
	t.input();
	t.print();
	return 0;
}