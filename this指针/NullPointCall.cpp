#include <iostream>
using namespace std;

class NullPointCall
{
public:
	static void test1();
	void test2();
	void test3(int i);
	void test4(); 

private:
	int _iTest;
	static int _sTest;

};


int NullPointCall::_sTest = 0;

// ��thisָ��   ֱ�ӵ��þ�̬���� 
void NullPointCall::test1()
{
	cout << _sTest << endl;
}

void NullPointCall::test2()
{
	cout << "very cool" << endl;
}

void NullPointCall::test3(int i)
{
	cout << "i = " << i << endl;
}
// p Ϊ��ָ�� ����ֻ��_iTest ���Է����ж� ��ָ���쳣
void NullPointCall::test4()
{
	cout << "_iTest = " << _iTest << endl;
}

int main24()
{
	NullPointCall *p = NULL;
	p->test1();
	p->test2();
	p->test3(3);
	p->test4(); // error

	system("pause");
	return 0;
}

