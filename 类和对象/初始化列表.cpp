#include <iostream>
using namespace std;


class Point
{
public:
	// 初始化表达式
	Point()
	: _ix(0)
	, _iy(0)
	{
		cout << "Point()" << endl;
	}
	//初始化的时候  按照 声明数据成员的顺序来 
	Point(int ix, int iy)
		:_ix(ix)   // 真正初始化成员
		, _iy(iy)
	{
		//_ix = ix; // 赋值操作
	}

private:
	int _ix;
	int _iy;
};