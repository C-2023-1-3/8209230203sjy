
#include<iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0, re = 0;
    char op;
    cout << "Please enter two numbers:" << endl;
    cin >> num1 >> num2;
    cout<<"Please enter the operation relation:" << endl;
    cin >> op;
    switch(op)
    {
    case '+':
        re = num1 + num2;
        cout << "The result is:" << re << endl;
        break;
    case '-':
        re = num1 - num2;
        cout << "The result is:" << re << endl;
        break;
    case '*':
        re = num1 * num2;
        cout << "The result is:" << re << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Divisor cannot be 0, please re-enter:" << endl;
            cin >> num2;
        }
        re = num1 /num2;
        cout << "The result is:" << re << endl;
        break;
    case '%':
        re =num1%num2;
        cout << "The result is:" << re << endl;
        break;
    default:
        cout << "The operation is invalid,please enter again" << endl;
        break;
    } 
 
}