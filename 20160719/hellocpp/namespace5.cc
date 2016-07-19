 ///
 /// @file    namespace5.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-19 08:17:19
 ///
 
#include <iostream>

using std::cout;
using std::endl;

namespace A
{
	namespace B
	{
		int num =10;
		void function()
		{
			cout << "A::B::function()" << endl;
		}
	}
}


int main()
{

	A::B::function();
	return 0;
}
