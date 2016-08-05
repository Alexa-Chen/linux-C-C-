#include <iostream>
using std::cout;
using std::endl;

class X
{
public:
	X()
		: _ix(0)
	{

	}
	X(int ix)
		: _ix(ix)
	{}

	void print()
	{
		cout << "X::_ix = " << _ix << endl;
	}
private:
	int _ix;
};

class Computer
{

public:
	Computer(float fprice)
		: _fprice(fprice)
	{
		_totalPrice += _fprice;
	}

	~Computer()
	{
		_totalPrice -= _fprice;
	}

	void print()
	{
		cout << "总价:" << _totalPrice << endl;
	}

	void printX()
	{
		_x.print();
	}

private:
	float _fprice;
	static float _totalPrice;
	//静态数据成员的初始化必须放在类之外,不能放在初始化列表里面
	static X _x;
};

float Computer::_totalPrice = 0;//共享的数据，由整个类共享
X Computer::_x(1);

int maindfg(void)
{
	Computer pc1(5000);
	// 对象的内存空间 不包括类的静态成员
	// 因为静态成员在 静态区 
	cout << "sizeof(pc1) = " << sizeof(pc1) << endl;
	cout << endl;
	pc1.print();
	Computer pc2(4000);
	pc2.print();

	pc1.printX();


	return 0;
}
