 ///
 /// @file    point.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-22 20:50:22
 ///
 

// 当把一个已经存在的对象赋值给另一个新的对象时
// 会调用复制构造函数
#include <iostream>
using std::cout;
using std::endl;

class Point 
{
public:
    Point() 
    :_ix(0)
    ,_iy(0)
    {
        cout << "Point()" << endl;
    }

    Point(int ix,int iy)
    :_ix(ix)
    ,_iy(iy) 
    {
        cout << "Point (int ,int)" << endl;       
    }
    
    //  如果不定义  系统会自动调用 复制构造函数
    //  写不写都无所谓
    //  此时 把pt1对象 传给 rhs
    Point(const Point & rhs)
    : _ix(rhs._ix)
    , _iy(rhs._iy)  
    {
       cout << "Point (const Point &)"  << endl;  
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

int main()
{
    int x = 5;
    int y = x;
    //下面等同于上面  复制构造函数
 
    Point pt1(1,2);
    pt1.print();
  //  Point pt2(p1); 和下面一样
    Point pt2 = pt1;
    pt2.print();

    return 0;
}


