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

	//explicit �ú���Ҫ��ʾ���� ��ֹ��ʽת��
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

	// ���ƹ��캯��
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
	//Point pt2 = 1;//��������ʽת��
	//pt2.print();

	return 0;
}


