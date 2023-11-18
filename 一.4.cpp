
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl;//<<oct(八进制)
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in oct unsigned int type:" << oct << testUnint << endl;//8进制输出
	float a = 2.56;//给实数a赋值
	cout << "Number before conversion:" << a<<endl;
	 a = (int)a;//强制转换
	cout <<"Number after conversion:"<< a << endl;//进行输出

	system("pause");
	return 0;
	//自己编程测试一下将testUnint按8进制输出 << oct; 将一个实数转换成int, 观察结果。
}