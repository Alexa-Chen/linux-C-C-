#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*
   static void *  operator new(size_t size)

   static void  operator delete(void *p)  
   
    ���ǿ⺯��

*/

class Student
{
public:
	// 2�����캯����ȥ��ɶ���ĳ�ʼ��
	Student()
		:_id(100)
		, _name(new char[strlen("mike")+1])
	{
		strcpy(_name, "mike");
		cout << "Student()" << endl;
	}
	// 3����ȥ�������������ͷŶѿռ�����ݳ�Ա
	~Student()
	{
		cout << "~Student()" << endl;
		delete[] _name;
	}

	// 1��operator new ֻ����student��Ŀռ� 
	static void * operator new(size_t nsize)
	{
		cout << "operator new (size_t nsize)" << endl;
		void * pRet = malloc(nsize);
		return pRet;
	}

	//4��operator delete �ͷ�student������
	static void  operator delete(void *p)
	{
		cout << "operator delete(void *p)" << endl;
		free(p);
	}

	void display()
	{
		cout << "ѧ�� " << _id << endl;
		cout << "���� " << _name << endl;
	}

private:
	int _id;
	char *_name;
};



int main1()
{
	Student *p1 = new Student;
	p1->display();
	delete p1;


	cin.get();
	return 0;
}