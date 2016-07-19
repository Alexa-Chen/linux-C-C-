 ///
 /// @file    reference.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-19 08:22:05
 ///
 
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a = 10;
	&a; 
	int & refa = a; // 引用 其实就是某一个变量的别名
	refa = 20;
	cout << "a = " << a << endl;

	// int & refb; // 引用必须要进行初始化
	int b = 30;
	refa = b;  //发生的是赋值操作 
	cout  << "a = " << a << endl;
	cout << "refa = " << refa <<endl;
}
