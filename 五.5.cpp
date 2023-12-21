#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int X = 60, int Y = 80)
	{
		x = X;
		y = Y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point a;
	cout << "The initial coordinates are:";
	a.display();
	a.setPoint(10, 10);
	cout << "The modified coordinates are:";
	a.display();
}