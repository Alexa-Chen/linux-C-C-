#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <iostream>
using namespace std;


// ��c++ ��  ���治��Ҫ��дstruct
// Ĭ������� �ṹ����public  
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
// Ĭ�������   class���ʼ�����private
public:
	// һ�ַ�ʽ    Ҳ���Խ�����д����֮��
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

// �ڶ��ַ�ʽ
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


