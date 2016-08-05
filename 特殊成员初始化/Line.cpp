#include <iostream>
using std::cout;
using std::endl;


class Point
{
public:
	Point()
		: _ix(0)
		, _iy(0)
	{
	
	}

	Point(int ix, int iy)
		: _ix(ix)
		, _iy(iy)

	{
	
	}
	Point(const Point & rhs)
		: _ix(rhs._ix)
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

class Line
{
public:
	Line(int x1, int y1, int x2, int y2)
		// �������ʽ��ʼ��_pt1,_pt2, ϵͳ��
		// �Զ�����Point���Ĭ�Ϲ��캯������_pt1,_pt2
		: _pt1(x1, y1)   //����Ҫ�ڳ�ʼ���б�������ʽ������Ӧ�Ĺ��캯��
		, _pt2(x2, y2)
	{
		cout << "Line(int,int,int,int)" << endl;
	}

	Line(const Line & rhs)
		: _pt1(rhs._pt1)
		, _pt2(rhs._pt2)
	{
		cout << "Line(const Line & rhs)" << endl;
	}

	void draw()
	{
		_pt1.print();
		cout << " --> ";
		_pt2.print();
		cout << endl;
	}
private:
	Point _pt1;
	Point _pt2;


};


