#include <iostream>
using std::cout;
using std::endl;

// c���Բ�֧�ֺ�������
// C���Ժ���������Ψһ
// C++ ֧�ֺ������ص� 
// ʵ��ԭ��  ���ָı� 

// name mangling 
// �����������ͬ   ���������������� ���� ˳�� 
// ���������ָı�   

// g++ -c �ļ���
// nm �ļ���.o
// �鿴 �������� 


#ifdef __cplusplus
extern "C" //��extern ���Բ���C��C++�ı��
{
	 //����C�ķ�ʽ���е���
#endif

	int add(int a, int b)
	{
		return a + b;
	}
#ifdef __cplusplus
}
#endif

int add(int a, int b, int c)
{
	return a + b + c;
}

int main23()
{

	int a = 3;
	int b = 4;
	int c = 5;
	cout << "a��b = " << add(a, b) << endl;
	cout << "a + b + c =" << add(a, b, c) << endl;

	system("pause");

	return 0;
}