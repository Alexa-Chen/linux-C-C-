 ///
 /// @file    reference2.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-19 08:34:09
 ///
 
#include <iostream>
using std::cout;
using std::endl;

// 值传递 ---> 复制
#if 0
void swap (int  a ,int b)
{
	int temp  = a;
	a = b;
	b =temp;
}


//地址传递 ---> 也是进行复制

void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

#endif
// 当引用作为 函数的参数的时候 传递实参时
// 就相当于 对实参的操作
// 可以减少复制的开销 提高程序的执行效率

void swap(int &refa,int &refb)
{	
	int temp = refa;
	refa = refb;
	refb = temp;
}


int main()
{
	int a = 3;
	int b = 4;
	
	cout << "a = " << a <<endl;
	cout << "b = " << b <<endl;

	swap(a,b);
	cout << "a = " << a <<endl;
	cout << "b = " << b <<endl;
	return 0;
}














