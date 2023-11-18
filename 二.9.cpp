#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float i, d;
    float w, s, a;
    d = 1.0; i = 2.0;
    for (; 2*i <= 100;d++) 
    {
        i = 2 * i;
    }
    s = 2 * (pow(2.0, d) - 1);
    w = 0.8 * s;
    a = w / d;
    cout << "Number of apples purchased on the last day:" << i<<endl;
    cout << "Total days of purchase:" << d << endl;
    cout << "Average cost per day:" << a << endl;

}