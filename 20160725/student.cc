 ///
 /// @file    student.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-07-25 14:45:12
 ///
      
#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Student
{
public:
	// 2.构造函数再去完成对象的初始化
	Student()
	: _id(100)
	, _name(new char[strlen("Mike") + 1])
	{
		cout << "Student()" << endl;
		strcpy(_name, "Mike");
	}

	~Student()
	{	//3. 先去调用析构函数，释放堆空间的数据成员
		cout << "~Student()" << endl;
		delete [] _name;
	}

	static void * operator new(size_t nsize)
	{	//1.operator new 只开辟student类的空间
		cout << "operator new(size_t)" << endl;
		void * pRet = malloc(nsize);
		return pRet;
	}

	static void operator delete(void * p)
	{	// 4.operator delete释放student对象本身
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


int main(void)
{
	Student * p1 = new Student;
	cout << endl;
	p1->display();

	cout << endl;
	delete p1;

	return 0;
}
