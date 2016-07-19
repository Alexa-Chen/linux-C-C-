 ///
 /// @file    namespace3.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-19 07:46:53
 ///
 
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

extern int num = 10;

namespace A
{
	int num = 1;
}

namespace B
{
	int num = 2;
	void displayB()
	{
	  int num = 3;
	  cout << "displayB函数中的num:" <<num <<endl;
	  cout << "A中的num:" << A::num << endl;
	  cout << "B中的num："<< B::num << endl;
      cout << "外部的num:"<< ::num << endl; //匿名
	  //的名称空间
	  //对于c++而言 之前使用的c库函数  都位于匿名空间
	  
      char pbuf[128];
	  const char* p = "hello  world";
	  ::strcpy(pbuf,p);
	  cout << pbuf << endl;
	}
}

int a = 3;

void function1()
{
	cout << "function1()" << endl;
}

int main(void)
{
  	B::displayB();
	::function1();
	cout << "::a = " << ::a << endl;
	return 0;
}



