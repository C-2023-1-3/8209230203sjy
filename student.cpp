#include"student.h" 
#include <iostream>
#include<string>
 
using namespace std;//��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
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