#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;


class  Student
{
public:
	Student()
		:_id(100)
		, _name(new char[strlen("mike") + 1])
	{
		cout << "Student()" << endl;
		strcpy(_name, "mike");
	}

	void destroy()
	{
		// �����ڲ�Ҫ������������ ������thisָ��
		//this->~Student();
		delete this;
	}
private:
	~Student()
	{
		cout << "~Student()" << endl;
		delete [] _name;
	}
public:
	static void * operator new (size_t size)
	{
		cout << "operator new (size_t size)" << endl;
		void *pRet = malloc(sizeof(size));
		return pRet;
	}

	static void operator delete(void *p)
	{
		cout << "operator delete(void *p)" << endl;
		free(p);
	}
public:
	void display()
	{
		cout << "id = " << _id << endl;
		cout << "name = " << _name << endl;
	}

private:
	char * _name;
	int _id;

};

int main()
{
	//Ҫ����������ִ��
	Student *p = new Student;
	p->display();
	//delete p;
	p->destroy();
	// Ҫ�����䲻��ִ��
  	// Student stu;


	cin.get();
	return 0;
}







