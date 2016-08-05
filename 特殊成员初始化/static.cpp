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
		cout << "�ܼ�:" << _totalPrice << endl;
	}

	void printX()
	{
		_x.print();
	}

private:
	float _fprice;
	static float _totalPrice;
	//��̬���ݳ�Ա�ĳ�ʼ�����������֮��,���ܷ��ڳ�ʼ���б�����
	static X _x;
};

float Computer::_totalPrice = 0;//��������ݣ��������๲��
X Computer::_x(1);

int maindfg(void)
{
	Computer pc1(5000);
	// ������ڴ�ռ� ��������ľ�̬��Ա
	// ��Ϊ��̬��Ա�� ��̬�� 
	cout << "sizeof(pc1) = " << sizeof(pc1) << endl;
	cout << endl;
	pc1.print();
	Computer pc2(4000);
	pc2.print();

	pc1.printX();


	return 0;
}
