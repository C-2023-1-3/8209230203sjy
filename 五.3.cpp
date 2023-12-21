#include<iostream>
using namespace std;
class Cuboid
{
private:
	int length;
	int width;
	int height;
public:
	void input();
	void compute();
};
void Cuboid::input()
{
	cout << "The length of the cuboid is:";
	cin >> length;
	cout << "The width of the cuboid is:";
	cin >> width;
	cout << "The height of the cuboid is:";
	cin >> height;
}
void Cuboid::compute()
{
	int V = length * width * height;
	cout << "The high volume of the cuboid is:" << V << endl;
}

int main()
{
	cout << "a:" << endl;
	Cuboid a;
	a.input();
	a.compute();
	cout << endl;
	cout << "b:" << endl;
	Cuboid b;
	b.input();
	b.compute();
	cout << endl;
	cout << "c:" << endl;
	Cuboid c;
	c.input();
	c.compute();
}