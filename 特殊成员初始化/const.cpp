#include <iostream>
using namespace std;

class Point
{

public:
	//const ���ݳ�Ա����Ҫ���ڳ�ʼ���б�������г�ʼ��
	Point()
		:_ix(0)
		,_iy(0)
	{

	}

	Point(int x, int y)
		:_ix(x)
		,_iy(y)
	{
	
	}

	// ���ƹ��캯�� 
	Point(const Point & rhs)
		:_ix(rhs._ix)
		,_iy(rhs._iy)
	{

	}


	~Point()
	{
	
	}

	void print()
	{

	}

private:
 	const int _ix;
	const int _iy;
};

int mainer()
{
	Point pt1(1, 2);
	pt1.print();

	Point pt2 = pt1;
	pt2.print();

	return 0;
}

