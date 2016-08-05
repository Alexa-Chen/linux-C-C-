#include <iostream>
using std::cout;
using std::endl;

int main()
{

	// 强转 C的方式
	int a = 3;
	double b = (double)a;
	double c = double(a);
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	// c++ 的方式
	//查找文件内容命令
	// cat 文件名 | grep (要找的内容)static_cast
	double d = static_cast<int>(a);//z针对内置类型
	cout << "d = " << d <<endl;

	
	int e = static_cast<int>(a);
	cout << "e = " << e << endl;


	void *pa = malloc(4);
	int *pb = static_cast<int *>(pa);
	*pb = 10;
	delete pb;

 	//const_cast 
	// dynamic_cast 
	//reinterpret_cast 可以在任意类型转化

	double  bd = 5.5;
	 //危险
	int *pd = reinterpret_cast<int *>(&bd);
	cout << "*pd = " << *pd << endl;
 




	system("pause");
	return 0;
}