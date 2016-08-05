
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

//只能生成堆对象的Student类
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
		//在类内部要调用析构函数，必须使用this指针
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
		cout << "学号:" << _id << endl;
		cout << "姓名:" << _name << endl;
	}

private:
	int _id;
	char * _name;
};


int main324(void)
{
	Student * p1 = new Student;//该语句能正常执行
	cout << endl;
	p1->display();

	cout << endl;
	//delete p1;
	p1->destroy();

	//Student stu;//该语句不能正常执行
	system("pause");
	return 0;
}
