 ///
 /// @file    computer1.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-21 03:45:53
 ///
#include <string.h> 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using std::cout;
using std::endl;


struct A
{   // 默认情况下的访问级别是public

	void print()
	{
		cout << "A :: print()" << endl;
		cout << "A修改后:" << _a << endl;
	}
	void setA(int A)
	{
		_a = A;
	}

	int _a;
};


class Computer
{
	//如果不写public 默认情况下 class的访问级别是private 
	
public:
	//成员函数的声明
	void print();
	void setBrand(const char* brand);
	void setPrice(float fprice);
	//私有属性
private:
	char _brand[20];
	float _fPrice;
};

  //在类之外定义成员函数
void Computer :: print()
{
	cout << "品牌：" << _brand  << endl;
	cout << "价格：" << _fPrice  <<endl;
}

void  Computer ::setBrand(const char* brand)
{
	strcpy(_brand,brand);
}

void  Computer :: setPrice(float fprice)
{
	_fPrice = fprice;
}

int main()
{
	A a;
	a._a = 10;
	a.setA(20);
	a.print();


	return 0;

}



int main1()
{
	Computer computer;
	computer.setBrand("lenovo");
	computer.setPrice(4000);
	computer.print();

	return 0;
}

