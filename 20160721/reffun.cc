 ///
 /// @file    reffun.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-20 23:08:00
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int arr[5] = {0,1,2,3,4};

int & func(int inx)
{
	return arr[inx];
}

int main()
{
    func(0) = 10;
	cout << arr[0] << endl;

	return 0;
}

