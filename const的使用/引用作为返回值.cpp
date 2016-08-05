#include <iostream>
using std::cout;
using std::endl;

int arr[5] = { 0, 1, 2, 3, 4 };

// 引用作为函数返回值
int & fun(int idx)
{
	return arr[idx];
}

// 当fun2 函数执行完毕后 a 作为局部变量 会销毁
// 所以不要返回一个局部变量的引用 
int & fun2()
{
	int a = 20;
	return a; // 编译可通过
}


// 11 是堆空间的变量 
//不要轻易返回一个堆空间变量的引用
int & fun3()
{
	int *pa = new int(11);
	return *pa;
}

int main()
{
	fun(0) = 10;
	cout << "arr[0] = " << arr[0] << endl;

	int & refa = fun2();
	cout << "refa = " << refa << endl;

	cout << endl;
	
	int a = 1;
	int b = 2;
	int c = 3;
	// fun3（） 返回匿名对象
	int &d = fun3();
	c = a + b + fun3();//执行完该语句后就发生内存泄露
	delete &d;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}
