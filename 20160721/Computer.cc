 ///
 /// @file    Computer.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-21 03:02:40
 ///
#include<string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
	//方法
public:
	void print()
	{
		cout << "品牌：" << _brand << endl;
		cout << "价格：" << _fPrice <<endl;
	}

	void setBrand(const char* brand)
	{
		strcpy(_brand,brand);		
	}

	void setPrice(float fPrice)
	{
		_fPrice = fPrice;
	}
	
//数据成员  表现封装性 
private:
	char  _brand[20];
	float _fPrice;

};

int main()
{
	//创建对象
	Computer computer;
	computer.setBrand("lenovo");
	computer.setPrice(4000);
	computer.print();
	//不可以这样 private在类之外不能直接访问
   // computer._fprice = 5000;	
	return 0;
}





