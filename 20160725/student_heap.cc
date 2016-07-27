 ///
 /// @file    student_heap.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-25 22:15:19
 ///


#include <stdlib.h>
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

//只能生成堆对象的Student 类

class Student
{
    public:
    Student()
    : _id(100)
    , _name(new char[strlen("Mike")+1]) 
    {
        cout << "Student()" << endl;
        strcpy(_name, "Mike");
    }
    void destory()
    {
        // 在类内部要调用析构函数 必须使用this指针
        // this --> ~student();
        delete this;
    }

    private :
    ~Student()
    {
        cout << "~Student()" << endl;
        delete [] _name;
    }
    public:

    static void * operator new (size_t nsize)
    {
        cout << "operator new (size_t)" << endl;
        void * pRet = malloc(nsize);
        return pRet;
    }
    
    static void operator delete(void * p)
    {
        cout << "operator delete(void)" << endl;
        free(p);
    }

    void display()
    {
        cout << "学号："<< _id << endl;
        cout << "姓名：" << _name <<  endl;

    }

    private:
       int _id;
       char * _name;

};

int main()

{
   Student *p1 = new Student;// 该语句可以正常运行
   cout << endl;
   
   p1->display();
   cout << endl;

   p1 ->destory();
  
   // Student stu; 该语句不能运行 
   return 0; 
}

