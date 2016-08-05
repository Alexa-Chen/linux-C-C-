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
	// ���ƹ��캯��  ��ϵͳ�ṩ�� 
	Computer(const Computer & rhs)
		:_brand(rhs._brand)   // ǳ����
		, _fprice(rhs._fprice)
	{
	   
	}

#endif
	//���ƹ��캯��  -- ����ʽ�����
	//�����������ʽ�Ƕ�����ᷢ�����޵ݹ飬ֱ��ջ���
	//���Բ���ֻ��������,���Դ������޵ݹ�

	Computer(const Computer & rhs)
		:_fprice(rhs._fprice)
	{
		// ��� 
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
	cout << "Ʒ�ƣ�" << _brand << endl;
	cout << "�۸�" << _fprice << endl;
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

