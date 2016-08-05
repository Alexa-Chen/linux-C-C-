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

	// ��̬��Ա���� �����б��� ������thisָ��
	// ���Բ���ֱ�ӷ��ʷǾ�̬���ݳ�Ա
	static void printTotalPrice()
	{
		   // error
		//cout << "�۸�" << _price << endl;
		cout << "�ܼۣ�" << totalprice << endl;
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
	// ͨ��������Ҳ���Ե���
	pc.printTotalPrice();
	//pc.print(pc);
	// ��̬��Ա��������ֱ��ͨ����������
	Computer::print(pc);
	Computer::printTotalPrice();
	system("pause");
	return 0;
}









