#include<iostream>

using std::cout;
using std::endl;

/*
  引用和指针的区别 

  int a  = 10;
  int & refb = a;  // 受限制的指针

  相同点 ：   都有地址的概念  
  不同点：    1，引用必须要初始化  指针不一定 
             2，指针可以为NULL 而引用不可以
			 3，引用代表的对象本身（别名）
			    指针需要解引用的方式访问 

  引用作为函数参数时  可以减少复制的开销  
  引用还可以作为函数的返回值 


*/

//值传递  进行复制 
void swap(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;

}

// 地址传递   值传递 进行复制
void swap1(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

// int &a =a;int &b =b;
 // 当引用作为函数的参数
//当引用传递实参时 就相当于对实参进行操作
// 还可以减少复制的开销 提高程序的执行效率 
void swap3(int &refa, int &refb)
{
	int temp = refa;
	refa = refb;
	refb = temp;

}



int mainry()
{

	int a = 30;
	int b = 40;
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;

}



