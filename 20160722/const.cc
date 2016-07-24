 ///
 /// @file    const.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-24 21:42:30
 /// 
 //  const 成员的初始化
 
#include <iostream>
using std:: cout;
using std :: endl;

class Point
{
public:
    //const 数据成员必须要放在初始化列表里面
    //进行初始化
Point()
: _ix(0)  // 初始化
, _iy(0)    
{
    // _ix = 0; //赋值操作
    cout << "point()" << endl;
}

Point(int ix,int iy)
: _ix(ix)
, _iy(iy)
{
    cout << "Point(int,int)" << endl;
}

//复制构造函数
Point(const Point & rhs)
: _ix(rhs._ix)
, _iy(rhs._iy)
{
    cout << "Point(const Point &)" << endl;
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
 const int _ix;
 const int _iy;

};

int main()
{
    
 //   double x = 5.0;
 // double y = x;

    Point pt1(1,2);
    pt1.print();


    Point pt2 = pt1;
    pt2.print();
 
    return 0;      
}









