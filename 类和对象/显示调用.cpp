#include <iostream>
using std::cout;
using std::endl;


class Point
{
public:
	Point()
		:_ix(0)
		, _iy(0)
	{
	
	}

	//explicit 该函数要显示调用 禁止隐式转换
	explicit 
		Point(int x)
		:_ix(x)
		, _iy(0)
	    {
		
		}

	Point(int x, int y)
		:_ix(x)
		, _iy(y)
	{
	
	}

	// 复制构造函数
	Point(const Point & rhs)
		:_ix(rhs._ix)
		, _iy(rhs._iy)
	{
	
	}
	~Point()
	{

	}

	void print()
	{
	}

private:
	int _ix;
	int _iy;
};

int maingj(void)
{
	//Point pt2 = 1;//发生了隐式转换
	//pt2.print();

	return 0;
}


