 ///
 /// @file    point3.cc
 /// @author  lemon(mars_chenmo@sina.com)
 /// @date    2016-07-21 05:39:28
 ///
 
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
			cout << "point() " << endl;
	    }  
		Point(int ix,int iy)
		: _ix(ix)
		, _iy(iy)
	    {
			cout << "point(int,int) " << endl; 
		}
		
		//如果不写系统也会自动会提供析构函数
		//析构函数存储在栈上  
		//析构函数等栈上的函数执行完毕后就调用
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

int main()
{
	Point pt;
	pt.print();
	Point pt2(1,2);
    pt2.print();
   // 在堆上开辟的空间 如果不释放 析构函数不会调用
   // 必须delete释放后才能调用
   // 当只有栈上的对象被销毁时 才会自动调用析构函数
   // 全局对象在 调用结束后 也会自动调用析构函数
	Point *p = new Point(3,4);
	p->print();
	delete p;

	return 0;
}
