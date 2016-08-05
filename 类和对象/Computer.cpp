#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <iostream>
using namespace std;


// 在c++ 里  里面不需要在写struct
// 默认情况下 结构体是public  
struct A
{
	void print()
	{
		cout << "A" << endl;
	}
	
	int _a;
};

int main2()
{
	A a;
	a._a = 10;
	a.print();

	system("pause");
	return 0;
}



class Computer
{
// 默认情况下   class访问级别是private
public:
	// 一种方式    也可以将方法写到类之外
	void print()
	{
		cout << "pinpai :" << _brand << endl;
		cout << "jiage :" << _fPrice << endl;
	}
	void setBrand(const char *brand)
	{
		strcpy(_brand, brand);
	}
	void setPrice(float fPrice)
	{
		_fPrice = fPrice;
	}

private:
	char _brand[20];
	float _fPrice;
};

// 第二种方式
//void Computer::print()
//{
//	cout << "   " << endl;
//
//}



int main1()
{
	int a;
	Computer computer;
	computer.setBrand("lenovo");
	computer.setPrice(4000);
	computer.print();
	system("pause");
	return 0;
}


