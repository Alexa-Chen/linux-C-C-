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
		// 在类内部要调用析构函数 必须用this指针
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
	//要求该语句正常执行
	Student *p = new Student;
	p->display();
	//delete p;
	p->destroy();
	// 要求该语句不能执行
  	// Student stu;


	cin.get();
	return 0;
}







