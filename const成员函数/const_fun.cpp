#include <iostream>
using namespace std;


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

	~Point()
	{
	
	}

	Point  (const Point & rhs)
		: _ix(rhs._ix)
	    , _iy(rhs._iy)
	{

	}

	Point & operator = (const Point & rhs)
	{
		_ix = rhs._ix;
		_iy = rhs._iy;
	
	}
	//在const成员函数里面不能修改对象的非静态数据成员
	// 不能调用非const版本的成员函数

	// const 成员函数
	void print(/*Point const * const this*/) const
	{
		// 由于this 指针不能修改 所以
		//_ix = 10; //error 
		cout << "(" << _ix
			<< "," << _iy
			<< ")" << endl;
	}


	// 与上面的是两个函数
	void print()
	{
		cout << "(" << _ix
			<< "," << _iy
			<< ")" << endl;
	
	}
	
	
	// Point * const this 
	void setX(int ix)
	{
		this->_ix = ix;
	}

private:
	int _ix;
	int _iy;
};

int main()
{
	Point pt(1, 2);
	//非const对象可以调用 const 成员函数
	// 俩个都有  就调最匹配的那个
	pt.print();

	// const 版本只能调用const成员函数 
	const Point pt2(1, 2);
	pt2.print();
	//const对象不能调用非const成员函数
	//pt2.setX();
	system("pause");
	return 0;
}








