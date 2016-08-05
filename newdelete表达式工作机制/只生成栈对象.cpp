
#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/*
  生成栈对象  构造函数必须公有 
*/

class Student
{
public:
	Student()
		:_id(100)
		, _name(new char[strlen("mike") + 1])
	{
		strcpy(_name, "mike");
		cout << "Student()" << endl;
	}

	~Student()
	{
		delete[] _name;
		cout << "~Student()" << endl;
	}

private:
	//在类之外无法正常调用
	static void * operator new(size_t size);
	static void   operator delete(void *p);
#if 0
	static void * operator new(size_t size)
	{
		cout << "static void * operator new(size_t size)" << endl;
		void *pRet = malloc(sizeof(size));
		return pRet;
	}

	static void  operator delete(void *p)
	{
		cout << "static void operator delete(void *p)" << endl;
		free(p);
	}

#endif
public:
	void display()
	{
		cout << "name = " << _name << endl;
		cout << "id = " << _id << endl;
	}


private:
	int _id;
	char *_name;
};


int main23()  
{ 
#if 0
	// 要求改表达式不能正常执行
	Student *p = new Student;
	p->display();

#endif

	Student stu; // 要求能正常执行 只能生成栈对象
	stu.display();
	cin.get();
	return 0;
}