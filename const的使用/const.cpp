#include <iostream>

using std::cout;
using std::endl;

/*
   const 和define d的区别
   
   1 编译器处理方式不同
   
   define 宏是在预处理阶段展开
   const常量是在编译运行阶段使用
   
   2 类型和安全检查不同
   define 宏没有类型 不做任何检查 仅仅是展开
   const常量是有具体类型 在编译阶段会执行类型检查

*/



// 宏定义是简单的字符串的替换 不会进行类型检查
//如果有错误 在运行时再能检查出来 
// const会在 编译时就能检查出来  
// 尽量避免使用 define 去定义常量
#define IMAX  1024
int main1()
{ 

	const int a = 10; //关键字修饰的变量的值不能被修改
    // a = 20; //error 

	 //const 修饰的常量必须进行初始化
	//const int b;

	int c = 20;
	//常量指针
	const int *p1 = &c;
	
	// const int *p1 是修饰p1 所指向的变量(对象) 所以不可修改
	//*p1 = 30;
	
	//与上面表达意思一样
	int const *p2 = &c;
    //*p2 = 30;
	
	// 可修改p3 所指向变量的值
	// 指针常量
	int * const p3 = &c;
	*p3 = 30;

	cout << "C = " << c << endl;

	// int * const p3 是修p3本身的值
	// 本身变量不能修改
	int d = 40;
	//p3 = &d;不能修p3的指向
	
	// p4本身 和 指向的变量都不能改
	const int * const p4 = &c;

	cout << sizeof(p1) << endl; // 4


	// 数组指针 是个指针  指向数组
	int(*p5)[10];

	// 指针数组 数组存放的是int * 的指针
	int *p6[10];

	// 函数指针 指向函数的入口地址 
	void(*p7)();

	// 指针函数  返回值 是指针
	void * fun();


	system("pause");
	return 0;

}