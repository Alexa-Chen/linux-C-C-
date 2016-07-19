 ///
 /// @file    hello.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-19 03:58:49
 ///
#include<stdio.h> 
#include <iostream>

using  std :: cout;
using  std :: endl;

#if 0
void cout()    //尽量避免名字相同情况 
{
	printf("function cout!\n");
}
#endif

namespace A
{
 void displayA()
 {
 	cout << "A::displayA()"<<endl;
 }
}
namespace B
{    
 void displayB()
 {
 //	using A::displayA; // 使用using 声明机制 
	displayA();
	cout << "B::displayB()" << endl;
      
 }
}

// using namespace A;//编译指令
int main()
{

	
  A:: displayA();
  cout << endl;
  B::displayB();
 
  return 0;
}







