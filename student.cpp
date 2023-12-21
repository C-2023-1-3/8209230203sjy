#include"student.h" 
#include <iostream>
#include<string>
 
using namespace std;//不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
};
void Student::set_value()
{
    cout << "The number of the student is:";
    cin >> num;
    cout << "The name of the student id:";
    cin >> name;
    cout << "The sex of the student is:";
    cin >> sex;

}