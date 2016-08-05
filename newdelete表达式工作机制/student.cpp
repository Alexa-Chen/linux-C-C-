#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*
   static void *  operator new(size_t size)

   static void  operator delete(void *p)  
   
    都是库函数

*/

class Student
{
public:
	// 2、构造函数再去完成对象的初始化
	Student()
		:_id(100)
		, _name(new char[strlen("mike")+1])
	{
		strcpy(_name, "mike");
		cout << "Student()" << endl;
	}
	// 3、先去调用析构函数释放堆空间的数据成员
	~Student()
	{
		cout << "~Student()" << endl;
		delete[] _name;
	}

	// 1、operator new 只开辟student类的空间 
	static void * operator new(size_t nsize)
	{
		cout << "operator new (size_t nsize)" << endl;
		void * pRet = malloc(nsize);
		return pRet;
	}

	//4、operator delete 释放student对象本身
	static void  operator delete(void *p)
	{
		cout << "operator delete(void *p)" << endl;
		free(p);
	}

	void display()
	{
		cout << "学号 " << _id << endl;
		cout << "姓名 " << _name << endl;
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