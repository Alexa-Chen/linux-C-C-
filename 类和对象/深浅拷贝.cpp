#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class  Computer
{
public:
	Computer(const char* brand, int price)
		:_fprice(price)
	{
		_brand = new char[strlen(brand) + 1];
		strcpy(_brand, brand);
	}

#if 0
	// 复制构造函数  由系统提供的 
	Computer(const Computer & rhs)
		:_brand(rhs._brand)   // 浅拷贝
		, _fprice(rhs._fprice)
	{
	   
	}

#endif
	//复制构造函数  -- 是显式定义的
	//如果参数的形式是对象，则会发生无限递归，直到栈溢出
	//所以参数只能是引用,可以打破无限递归

	Computer(const Computer & rhs)
		:_fprice(rhs._fprice)
	{
		// 深拷贝 
		_brand = new char[strlen(rhs._brand) + 1];
		strcpy(_brand, rhs._brand);
	}


	~Computer()
	{
		delete[] _brand;
	}
	void print();
	void setBrand(const char * brand);
	void setPrice(float fPrice);

private:
	char *_brand;
	int _fprice;
};


void Computer::print()
{
	cout << "品牌：" << _brand << endl;
	cout << "价格：" << _fprice << endl;
}

void Computer::setBrand(const char * brand)
{
	_brand = new char[strlen(brand) + 1];
	strcpy(_brand, brand);
}

void Computer::setPrice(float fPrice)
{
	_fprice = fPrice;
}

int mainfg(void)
{

	Computer computer("LENOVE", 5000);
	computer.print();

	Computer computer2 = computer;
	computer2.print();
	return 0;
}

