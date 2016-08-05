#include <iostream>
using std::cout;
using std::endl;

/*
   new/delete 和 malloc/free 的区别 

   1  new/delete 不是函数 是表达式 
      malloc/free  是库函数

   2  new 先开辟空间 再进行初始化 而malloc只会开辟空间
    
   3  malloc 返回值是 void需要强转
      new 返回的是相应类型的指针 不需强转





*/


int main1()
{

#if 0
	// C中的做法
	//之开辟空间
	int *pa = (int*)malloc(sizeof(int)); 
	*pa = 10; // 类似初始化地操作
	cout << pa << endl;
	cout << *pa << endl;
	free(pa);

#endif 

	// C++ 的做法 


	int *pa = new int(10);// 完成空间的开辟并且对其初始化化
	cout << sizeof(pa) << endl;
	cout << *pa << endl;

	// delete  表达式
	delete pa;

	// 开辟数组的空间  数组不能在() 赋值
	int *pb = new int[10]();
	for (int idx = 0; idx != 10; ++idx)
	{
		//cout << pb[idx] << endl;
		pb[idx] = idx;
	}

	for (int idx = 0; idx != 10; ++idx)
		cout << pb[idx] << endl;

	// 释放数组的空间
	delete  [] pb;

	system("pause");
	return 0;
} 