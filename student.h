#pragma once
#include<iostream>
#include"student.h" 
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value();
private:
	int num;
	string name;
	char sex;
};