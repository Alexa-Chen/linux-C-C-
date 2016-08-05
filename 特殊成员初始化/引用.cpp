#include <iostream>
using std::cout;
using std::endl;


class Point
{
public:
	//引用数据成员必须要放在初始化列表里面进行初始化

	Point(int ix, int iy, double & dz)
		: _ix(ix)
		, _iy(iy)
		, _ref1(_ix)
		, _ref2(dz)
	{
		//_ref1 = _ix;
		//int a = 3; 
		//int & ref = a; 
		cout << "Point(int,int)" << endl;
	}

	Point(const Point & rhs)
		: _ix(rhs._ix)
		, _iy(rhs._iy)
		, _ref1(rhs._ref1)
		, _ref2(rhs._ref2)
	{
		cout << "Point(const Point & rhs)" << endl;
	}


	~Point()
	{
		cout << "~Point()" << endl;
	}

	void setX(int x)
	{
		_ix = x;
	}

	void print()
	{
		cout << "(" << _ix
			<< "," << _iy
			<< "," << _ref1
			<< "," << _ref2
			<< ")" << endl;
	}
private:
	int _ix;
	int _iy;
	int & _ref1;
	double & _ref2;
};

int test(void)
{
	double dval = 5.0;
	Point pt1(3, 4, dval);
	pt1.print();

	Point pt2 = pt1;//copy constructor
	Point pt3(pt1);//

	Point pt4(1, 2, dval);
	//pt4 = pt1;// operator=
	return 0;
}

int main(void)
{
	double dval = 5.0;
	Point pt1(3, 4, dval);//double & dz = dval;
	pt1.print();

	Point pt2(pt1);
	pt2.print();

	cout << endl;
	pt1.setX(7);
	pt1.print();
	pt2.print();

	cout << endl;
	dval = 6.0;
	pt1.print();
	pt2.print();
	system("pause");
	return 0;
}
