#include <iostream>
#include <string>
#include <stdio.h>
using std::cout;
using std::endl;
using std::string;


void test()
{   
	// �����޸�   ���ֳ�����
	const char *pstr = "hello world";
	printf("%s", pstr);

	//ջ�ռ�
	char arr[128] =  "hello";
	printf("%s\n", arr);
	char arr1[128] = "shwnzhwn";
	strcat(arr, arr1);

	char p1[] = "hello";
	char p2[] = "shwnxhen";

	char *p3 = new char[strlen(p1) + strlen(p2) + 1];
	strcpy(p3, p1);
	strcat(p3, p2);
	printf("%s", p3);

}

void test3()
{
	string s1 = "hello";
	string s2 = "world";

	string s3 = s1 + s2;
		 
	string s4 = s3 + 'A';

	int a = s4.length();
	int b = s4.size();
	s3.append(s2);
	//��ȡ
	string s5 = s4.substr(s4.find("hello"), 5);
	//C++ ת��ΪC �ķ���ַ���
	const char *p = s4.c_str();

}


int main()
{
	
	
	string s1 = "hello,world";
	cout << s1 << endl;

	system("pause");
	return 0;
}

