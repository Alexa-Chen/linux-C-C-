 ///
 /// @file    point.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-21 04:45:54
 ///
 
#include <iostream>

using std::cout;
using std::endl;

class Point
{
public:
#if 0
	Point()//默认构造函数
	{
		_ix = 0;
		_iy = 0;
		
	}

#endif 
     //如果这样赋值就说明默认了构造 可以当两个构造函数使用
	Point(int ix = 0,int iy = 0)
	{
		_ix = ix;
		_iy = iy;
	}
	void print()
	{
	cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

private:
	int _ix;
	int _iy;
};

int main()
{
	Point pt; // 调用了默认的构造函数  
	pt.print();	

	Point pt2(1,3);
	pt2.print();
	return 0;
}
