#include <iostream>

using std::cout;
using std::endl;


int main55()
{
	int a = 10;
	//引用就是某一个变量的别名
	int & refa = a; // & 引用符号 
	refa = 20;
	cout << "a = " << a << endl; //20
	 
	// 引用必须要初始化
	//int & refb;  error


	int b = 30;
	refa = b;// 发生赋值操作

	cout << "a = " << a << endl;  // 30
	cout << "refa = " << refa << endl; //30

	system("pause");
	return 0;
}