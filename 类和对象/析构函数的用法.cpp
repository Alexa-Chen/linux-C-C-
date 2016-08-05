#include <iostream>
using namespace std;

class Computer
{
public:
	Computer(const char* brand, int fprice)
		:_price(fprice)
	{
		_brand = new char[strlen(brand) + 1];
		strcpy(_brand, brand);
	}

	~Computer()
	{
		cout << "~Computer()" << endl;
		delete[] _brand; //Ö´ÐÐ¿Õ¼äÊÍ·Å
	}

	void print();
	void setBrand(const char *brand);
	void setPrice(int fprice);

private:

	char *_brand;
	int _price;
};

void Computer::print()
{

}


void Computer::setBrand(const char *brand)
{
	_brand = new char[strlen(brand) + 1];
	strcpy(_brand, brand);

}


void Computer::setPrice(int fprice)
{
	_price = fprice;

}


int main35()
{
	Computer computer("len", 400);
	computer.print();
	Computer computer2("Mac", 2300);
	computer.print();

	return 0;

}