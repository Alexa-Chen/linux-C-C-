#include <iostream>
using namespace std;

class  Point
{

public:
#if 0
	//系统会自动给默认构造函数
	Point()
	{
		_ix = 0;
		_iy = 0;
	}

#endif
	// 默认构造可以重载

	Point(int x = 0, int y = 0)
	{
		// 默认带了无参 
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