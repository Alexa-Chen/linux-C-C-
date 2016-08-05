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
	//���ƹ��캯��  -- ����ϵͳ�ṩ��
	Computer(const Computer & rhs)
		: _brand(rhs._brand)   //ǳ����
		, _fPrice(rhs._fPrice)
	{
		cout << "Computer(const Computer &)" << endl;
	}
#endif

	//���ƹ��캯��  -- ����ʽ�����
	//�����������ʽ�Ƕ�����ᷢ�����޵ݹ飬ֱ��ջ���
	//���Բ���ֻ��������,���Դ������޵ݹ�
	//Computer(const Computer rhs)
	Computer(const Computer & rhs)  //const Computer rhs = computer
		: _fPrice(rhs._fPrice)
	{//���
		_brand = new char[strlen(rhs._brand) + 1];
		strcpy(_brand, rhs._brand);
		cout << "Computer(const Computer &)" << endl;
	}

	Computer & operator=(const Computer & rhs)
	{
		cout << "Computer & operator=(const Computer&)" << endl;
		if (this == &rhs)  //��Ҫ�����Ը��Ƶ�����
			return *this;
		delete[] _brand;//����������������ͷ�ԭ���Ŀռ�

		//Ȼ���ٽ��и���
		_brand = new char[strlen(rhs._brand) + 1];
		strcpy(_brand, rhs._brand);

		_fPrice = rhs._fPrice;

		return *this;
	}

	~Computer()
	{
		cout << "~Computer()" << endl;
		delete[] _brand;//ִ�пռ���ͷ�
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
	cout << "Ʒ�ƣ�" << _brand << endl;
	cout << "�۸�" << _fPrice << endl;
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




