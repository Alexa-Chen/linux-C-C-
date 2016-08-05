#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	Computer(const char * brand, float fPrice)
		: _fPrice(fPrice)
	{
		_brand = new char[strlen(brand) + 1];
		strcpy(_brand, brand);
	}

#if 0
	//复制构造函数  -- 是由系统提供的
	Computer(const Computer & rhs)
		: _brand(rhs._brand)   //浅拷贝
		, _fPrice(rhs._fPrice)
	{
		cout << "Computer(const Computer &)" << endl;
	}
#endif

	//复制构造函数  -- 是显式定义的
	//如果参数的形式是对象，则会发生无限递归，直到栈溢出
	//所以参数只能是引用,可以打破无限递归
	//Computer(const Computer rhs)
	Computer(const Computer & rhs)  //const Computer rhs = computer
		: _fPrice(rhs._fPrice)
	{//深拷贝
		_brand = new char[strlen(rhs._brand) + 1];
		strcpy(_brand, rhs._brand);
		cout << "Computer(const Computer &)" << endl;
	}

	Computer & operator=(const Computer & rhs)
	{
		cout << "Computer & operator=(const Computer&)" << endl;
		if (this == &rhs)  //先要考虑自复制的问题
			return *this;
		delete[] _brand;//对于左操作数，先释放原来的空间

		//然后再进行复制
		_brand = new char[strlen(rhs._brand) + 1];
		strcpy(_brand, rhs._brand);

		_fPrice = rhs._fPrice;

		return *this;
	}

	~Computer()
	{
		cout << "~Computer()" << endl;
		delete[] _brand;//执行空间的释放
	}

	void print();
	void setBrand(const char * brand);
	void setPrice(float fPrice);
private:
	char * _brand;
	float _fPrice;
};

void Computer::print()
{
	cout << "品牌：" << _brand << endl;
	cout << "价格：" << _fPrice << endl;
}

void Computer::setBrand(const char * brand)
{
	_brand = new char[strlen(brand) + 1];
	strcpy(_brand, brand);
}

void Computer::setPrice(float fPrice)
{
	_fPrice = fPrice;
}

int main(void)
{
	Computer computer("LENOVE", 5000);
	computer.print();

	Computer computer2 = computer;
	computer2.print();

	cout << endl;
	Computer computer3("Mac", 10000);

	computer2 = computer2;
	computer2 = computer3;
	return 0;
}




