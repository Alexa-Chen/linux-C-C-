#include<iostream>

using std::cout;
using std::endl;

/*
  ���ú�ָ������� 

  int a  = 10;
  int & refb = a;  // �����Ƶ�ָ��

  ��ͬ�� ��   ���е�ַ�ĸ���  
  ��ͬ�㣺    1�����ñ���Ҫ��ʼ��  ָ�벻һ�� 
             2��ָ�����ΪNULL �����ò�����
			 3�����ô���Ķ�����������
			    ָ����Ҫ�����õķ�ʽ���� 

  ������Ϊ��������ʱ  ���Լ��ٸ��ƵĿ���  
  ���û�������Ϊ�����ķ���ֵ 


*/

//ֵ����  ���и��� 
void swap(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;

}

// ��ַ����   ֵ���� ���и���
void swap1(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

// int &a =a;int &b =b;
 // ��������Ϊ�����Ĳ���
//�����ô���ʵ��ʱ ���൱�ڶ�ʵ�ν��в���
// �����Լ��ٸ��ƵĿ��� ��߳����ִ��Ч�� 
void swap3(int &refa, int &refb)
{
	int temp = refa;
	refa = refb;
	refb = temp;

}



int mainry()
{

	int a = 30;
	int b = 40;
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;

}



