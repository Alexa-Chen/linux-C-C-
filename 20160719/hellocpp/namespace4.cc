 ///
 /// @file    namespace4.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-19 08:12:10
 ///
 
#include <iostream>

using std::cout;
using std::endl;

namespace B
{
	int num =1;
}

namespace A
{
	void displayA()
	{
		B:: num = 100;
		cout << "displayA()" << endl;
	}

}

namespace B 
{
  void displayB()
  {
	A::displayA();
  }
}

int main()
{

	B::displayB();
    return 0;
}

