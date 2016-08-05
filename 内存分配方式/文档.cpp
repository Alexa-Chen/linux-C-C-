/*
     程序的内存分配布局 

	 1 栈区  存放函数参数的值 局部变量的值等 自动 释放
	 2 堆    手动释放（与数据结构的堆不一样）
	 3 全局/静态区  全局变量和静态变量 在程序编译时分配
	 4文字常量区  存放常量字符串
	 5程序代码区 存放函数体 类 类的成员函数 全局函数等（只读）

*/

#include <stdio.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


//int  a = 100; // 全局区
//static int b = 100; //同上

int a = 0; // 全局区
const int b = 20; // 文字常量区
char *p1; 


int main()
{
	const int d = 0; // 栈区
	int b;
	char s[] = "123456";
	char *p2;
	const char *p3 = "123456";
	static int c = 0;
	p1 = new char[10];
	p2 = new char[5];
	//strcpy(p1, "123456");

	printf("&a =  %p\n", &a);
	printf("&p1 = %p\n", &p1);
	printf("p1 =  %p\n", p1);
	printf("&b = %p\n", &b);
	printf("S = %p\n", s);
	printf("&p2 = %p\n", &p2);
	printf("p2 = %p\n", p2);
	printf("&p3 = %p\n", &p3);
	printf("p3 = %p\n", p3);
	printf("&c = %p\n", &c);


	system("pause");
	return 0;
	
}




