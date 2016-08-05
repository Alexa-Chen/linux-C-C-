#include <iostream>
using std::cout;
using std::endl;

/*
    复制构造函数   
	 point(const point & rhs);

	 三种情况下 会调用  

      1、 当一个对象已经存在 而要用其初始化
	  另一个对象时 要初始化
	  Point pt1(1,2);
	  Point pt2 = pt1;
	  Point pt3(pt1);
	  2、
	  当形参是对象时 在实参与形参进行结合时
	  void fun(Point pt);值传递
	  Point pt = pt1;
	  3、当函数返回值是对象 执行return 语句时
	   查看rvo 优化  -fno-elide-constructors
	  Point getPoint()
	  {
	     Point pt(3,4);
		 return pt;
	  }

	  Point(const Point rhs) 会发生无限递归
	  所以 必须为引用
	  Point(const Point & rhs)

	  
	  
	  赋值运算符函数

	  Computer & operator=(const Computer &rhs)
	  {
	    //返回值是对象也可以 但是降低效率
		当返回给对象时还要调用复制构造函数
		对象本身变化 要返回引用

	  }

	  
	   class Computer
	   {

	    public:
		Computer(const Computer & rhs)
		:_price(rhs._price)
		{
		   _brand = new char[strlen(rhs._brand)];
		   strcpy(_brand,rhs._brand);
		}


		Computer & operator= (const Computer &rhs)
		{
		     //自复制
			if(this != &rhs)
			{
			    如果两个对象都存在 需要delete 原来对象的空间（左操作数）
			    delete [] _brand;
				_brand = new char[strlen(rhs._brand)+1];
				strcpy(_brand,rhs._brand);

			}
		
		}
	      private:
		  char 8 _brand;
		  int _price;
	   };

	   computer pc1("1" ,33);
	   computer pc2("2" 44);
	   pc2 = pc1;



	  Computer & operator(const Computer & rhs)
	  {
	  
	  
	  }

*/

class Point
{
public:
	Point()
		:_ix(0)
		,_iy(0)
	{

	}
	Point(int ix, int iy)
		:_ix(ix)
		, _iy(iy)
	{
	 
	}

	// 复制构造函数
	Point(const Point & rhs)
		:_ix(rhs._ix)
		,_iy(rhs._iy)
	{
	
	}

	// 系统为我们提供的赋值运算符函数
	Point & operator= (const Point & rhs)
	{
		this->_ix = rhs._ix;
		this->_iy = rhs._iy;
		return *this;
	}

	~Point()
	{
	
	}

	// this 指针 ----> 隐藏的参数

	void  setX(/*Point * const this*/ int ix)
	{
		this->_ix = ix;
	}


	void print()
	{
	
	}
private:
	int _ix;
	int _iy;
};

int test(void)
{

	double x = 5.0;
	double y = x;

	Point pt1(1, 2);
	pt1.print();

	Point pt2 = pt1;
	pt2.print();

	return 0;
}
int main(void)
{
	double x = 5.0;
	double y = 6.0;
	x = y;

	Point pt;
	pt.setX(3);
	pt.print();


	Point pt2(1, 2);
	pt2.setX(5);
	pt2.print();

	pt = pt2;//系统为我们自动提供了一个赋值运算符函数
	pt.print();


	return 0;
}


