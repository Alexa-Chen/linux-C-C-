#include <iostream>
using std::cout;
using std::endl;

//�ں������е���ʱ �������b  b Ĭ��Ϊ 0 
// int add(int a = 0,int b) error
// Ĭ�ϲ���������ֻ�ܴ����������
int add(int a=0, int b=0 )
{
	return a + b;
}
//Ĭ�ϲ������п��ܵ��¶���������
// �������� 
#if 0
int add(int a, int b, int c = 0)
{
	return a + b + c;
}
#endif 
int main58()
{
	int a = 3;
	cout << add(a) << endl;
	//��Ҫ���� a b ����Ĭ�ϳ�ʼ��
	//cout << add() << endl;
	system("pause"); 
	return 0;
}