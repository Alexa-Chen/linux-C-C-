 ///
 /// @file    computer1.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-21 03:45:53
 ///
#include <string.h> 
#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;

class Computer
{
	
public:
    Computer(const char* brand,float fPrice)
	: _fPrice(fPrice)
	{
		_brand = new char[strlen(brand)+1];
		strcpy(_brand, brand);
	}
	//当在堆空间开辟空间的时候 
	//释放函数要放在析构函数里来完成空间的释放 清理
	//如果不释放直接清理  会造成内存的泄露
    ~Computer()
	{
		cout << "~Computer()" << endl;
		delete[] _brand; // 执行空间的释放
	}

	void print();
	void setBrand(const char* brand);
	void setPrice(float fprice);
private:
	char* _brand;
	float _fPrice;
};

void Computer :: print()
{
	cout << "品牌：" << _brand  << endl;
	cout << "价格：" << _fPrice  <<endl;
}

void  Computer ::setBrand(const char* brand)
{
	_brand = new char[strlen(brand)+1];

	strcpy(_brand,brand);
}

void  Computer :: setPrice(float fprice)
{
	_fPrice = fprice;
}


int main()
{
	Computer computer("lenovo",5000);
	computer.print();
	
	Computer computer2("Mac",10000);
	computer2.print();

	return 0;
}

