
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

//ֻ�����ɶѶ����Student��
class Student
{
public:
	Student()
		: _id(100)
		, _name(new char[strlen("Mike") + 1])
	{
		cout << "Student()" << endl;
		strcpy(_name, "Mike");
	}

	void destroy()
	{
		//�����ڲ�Ҫ������������������ʹ��thisָ��
		//this->~Student();
		delete this;
	}

private:
	~Student()
	{
		cout << "~Student()" << endl;
		delete[] _name;
	}
public:

	static void * operator new(size_t nsize)
	{
		cout << "operator new(size_t)" << endl;
		void * pRet = malloc(nsize);
		return pRet;
	}

	static void operator delete(void * p)
	{
		cout << "operator delete(void*)" << endl;
		free(p);
	}

	void display()
	{
		cout << "ѧ��:" << _id << endl;
		cout << "����:" << _name << endl;
	}

private:
	int _id;
	char * _name;
};


int main324(void)
{
	Student * p1 = new Student;//�����������ִ��
	cout << endl;
	p1->display();

	cout << endl;
	//delete p1;
	p1->destroy();

	//Student stu;//����䲻������ִ��
	system("pause");
	return 0;
}
