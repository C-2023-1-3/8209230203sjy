#include<iostream>
using namespace std;
int main()
{
	int a, b, c, C;
	cout << "Please enter the three sides of the triangle:" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{   
		cout << "The triangle does not exist" << endl;
		for (; a + b <= c || a + c <= b || b + c <= a;)
		{
			cout << "Please enter the three sides of the triangle again:" << endl;
			cin >>a >> b >> c;
		}
		
		    C = a + b + c;
	}
	if (a + b > c && a + c > b && b + c > a)
	{
		
		C = a + b + c;
	}
	if (a == c || a == b || b == c)
	{
		cout << "Triangles are isosceles triangles" << endl;
	}
	cout << "The circumference of the triangle is:" << C << endl;
}