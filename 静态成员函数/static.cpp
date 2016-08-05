#include <string.h>
#include <iostream>
using namespace std;


class Computer
{
public:
	Computer(const char *brand, int price)
		:_price(price)
	{
		_brand = new char[strlen(brand) + 1];
		strcpy(_brand, brand);
		totalprice += _price;
	}

	~Computer()
	{
		totalprice -= _price;
	}

	// 静态成员函数 参数列表中 不包含this指针
	// 所以不能直接访问非静态数据成员
	static void printTotalPrice()
	{
		   // error
		//cout << "价格：" << _price << endl;
		cout << "总价：" << totalprice << endl;
	}

	static void print(Computer &com)
	{
		cout << com._brand << endl;
		cout << com._price << endl;
	}

private:
	char *_brand;
	int _price;
	static int totalprice;
};

int  Computer::totalprice = 0;

//void Computer::print(Computer & com)
//{
//	cout << "pinpai: " << com._brand << endl;
//	cout << "jiage :" << com._price << endl;
//
//}


int main()
{
	Computer pc("I", 6000);
	// 通过对象名也可以调用
	pc.printTotalPrice();
	//pc.print(pc);
	// 静态成员函数可以直接通过类名访问
	Computer::print(pc);
	Computer::printTotalPrice();
	system("pause");
	return 0;
}









