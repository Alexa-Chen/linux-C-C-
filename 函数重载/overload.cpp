#include <iostream>
using std::cout;
using std::endl;

// c语言不支持函数重载
// C语言函数名必须唯一
// C++ 支持函数重载的 
// 实现原理  名字改编 

// name mangling 
// 如果函数名相同   会根据其参数的类型 个数 顺序 
// 来进行名字改编   

// g++ -c 文件名
// nm 文件名.o
// 查看 重载名字 


#ifdef __cplusplus
extern "C" //用extern 可以采用C和C++的编程
{
	 //采用C的方式进行调用
#endif

	int add(int a, int b)
	{
		return a + b;
	}
#ifdef __cplusplus
}
#endif

int add(int a, int b, int c)
{
	return a + b + c;
}

int main23()
{

	int a = 3;
	int b = 4;
	int c = 5;
	cout << "a＋b = " << add(a, b) << endl;
	cout << "a + b + c =" << add(a, b, c) << endl;

	system("pause");

	return 0;
}