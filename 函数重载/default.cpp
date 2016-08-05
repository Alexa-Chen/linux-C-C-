#include <iostream>
using std::cout;
using std::endl;

//在函数进行调用时 如果不传b  b 默认为 0 
// int add(int a = 0,int b) error
// 默认参数的设置只能从右向左进行
int add(int a=0, int b=0 )
{
	return a + b;
}
//默认参数是有可能导致二义性问题
// 尽量避免 
#if 0
int add(int a, int b, int c = 0)
{
	return a + b + c;
}
#endif 
int main58()
{
	int a = 3;
	cout << add(a) << endl;
	//需要都对 a b 进行默认初始化
	//cout << add() << endl;
	system("pause"); 
	return 0;
}