 ///
 /// @file    namespace2.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-19 07:38:43
 ///
 
#include <iostream>
using std:: cout;
using std::endl;

namespace A
{
 int  num = 10;
}

namespace B
{
	int num = 20;
}
//注意在使用using 声明机制时 不要饮用二义性 
//using A::num
//usinh B::num


int main()
{
	cout << "A::num = " << A:: num <<endl;
	cout << "B::num = " << B:: num <<endl;
    A::num =  30;
	B::num = 40;

	cout << "A::num = " << A::num << endl;
	cout << "B::num = " << B::num << endl; 

   return 0;
}



