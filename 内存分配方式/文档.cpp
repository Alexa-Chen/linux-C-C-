/*
     ������ڴ���䲼�� 

	 1 ջ��  ��ź���������ֵ �ֲ�������ֵ�� �Զ� �ͷ�
	 2 ��    �ֶ��ͷţ������ݽṹ�ĶѲ�һ����
	 3 ȫ��/��̬��  ȫ�ֱ����;�̬���� �ڳ������ʱ����
	 4���ֳ�����  ��ų����ַ���
	 5��������� ��ź����� �� ��ĳ�Ա���� ȫ�ֺ����ȣ�ֻ����

*/

#include <stdio.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


//int  a = 100; // ȫ����
//static int b = 100; //ͬ��

int a = 0; // ȫ����
const int b = 20; // ���ֳ�����
char *p1; 


int main()
{
	const int d = 0; // ջ��
	int b;
	char s[] = "123456";
	char *p2;
	const char *p3 = "123456";
	static int c = 0;
	p1 = new char[10];
	p2 = new char[5];
	//strcpy(p1, "123456");

	printf("&a =  %p\n", &a);
	printf("&p1 = %p\n", &p1);
	printf("p1 =  %p\n", p1);
	printf("&b = %p\n", &b);
	printf("S = %p\n", s);
	printf("&p2 = %p\n", &p2);
	printf("p2 = %p\n", p2);
	printf("&p3 = %p\n", &p3);
	printf("p3 = %p\n", p3);
	printf("&c = %p\n", &c);


	system("pause");
	return 0;
	
}




