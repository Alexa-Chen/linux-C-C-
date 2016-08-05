#include <iostream>

using namespace std;


class Point
{
public:
	Point()
		:_ix(0)
		,_iy(0)
	{
		cout << "Point()" << endl;
	}

	Point(int x, int y)
		:_ix(x)
		,_iy(y)
	{
		cout << "Point(int ,int)" << endl;
	}

	~Point()
	{
		cout << "~Point()" << endl;
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

Point globalPt; // 全局对象也会自动调用西沟函数 

int mainrty()
{
	Point pt; // 当对象被销毁时 才会自动调用构造函数
	pt.print();
	Point pt2(1, 2);
	pt2.print();
	
	//堆对象销毁 必须用delete
	int *pa = new int(3);
	delete pa;

	Point *p = new Point(3, 4);
	p->print();
	delete p;


	return 0;

}

