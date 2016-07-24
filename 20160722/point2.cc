 ///
 /// @file    point2.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-22 23:42:37
 ///
 
#include <iostream>
using std:: cout;
using std:: endl;

class Point
{
    public:
    Point() 
    : _ix(0)
    , _iy(0)
    {
        cout << "Point()" << endl;
    }

    Point (int ix,int iy)
    : _ix(ix)
    , _iy(iy)
    {
        cout << "Point(int,int)" <<endl;
    }

    //复制构造函数
    Point (const Point & rhs)
    : _ix(rhs._ix)
    , _iy(rhs._iy)
    {
        cout << "Point(const Point & rhs)"<<endl;

    
    }
     ~Point()
     {
        cout << "~Point()..." << endl;
     
     }
    private:
     int _ix;
     int _iy;
};
// 当函数的返回值是对象
// 函数调用完成返回时
// 也会调用复制构造函数

//返回值优化
Point getPoint()
{
    Point pt(5,6);
    return pt;
}

int main(){

    getPoint();
    return 0;

}














