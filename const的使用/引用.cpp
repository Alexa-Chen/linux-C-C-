#include <iostream>

using std::cout;
using std::endl;


int main55()
{
	int a = 10;
	//���þ���ĳһ�������ı���
	int & refa = a; // & ���÷��� 
	refa = 20;
	cout << "a = " << a << endl; //20
	 
	// ���ñ���Ҫ��ʼ��
	//int & refb;  error


	int b = 30;
	refa = b;// ������ֵ����

	cout << "a = " << a << endl;  // 30
	cout << "refa = " << refa << endl; //30

	system("pause");
	return 0;
}