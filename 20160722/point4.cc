 ///
 /// @file    point4.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-24 20:11:45

 ///    赋值运算符的原理  
 
#include <iostream>
using std::cout;
using std::endl;

class Point 
{
public :
    Point()
    :_ix(0)
    ,_iy(0)
    {
        cout << "Point()--" << endl;
    } 
    Point(int ix,int iy)
    :_ix(ix)
    ,_iy(iy)
    {
        cout << "Point(int x, int y)--" << endl;
    }
    // 复制构造函数
    Point(const Point & rhs)
    :_ix(rhs._ix)
    ,_iy(rhs._iy) 
    {
        cout << "Point(const Point &)" << endl;
    }
   
#if 1
    //系统为我们提供的赋值运算符函数
    Point & operator = (const Point & rhs)
    {
        cout << "point & operator = (const Point &)"<<endl;
        this->_ix = rhs._ix;
        this->_iy = rhs._iy;
        return *this;
    }
#endif
    ~Point()
    {
        cout << "~Point()"<< endl;
    }
    // this 指针 -->隐藏的函数
   void setX(/*Point * const this,*/int ix)
   {
        this->_ix = ix;
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
    int y = 6;
    x = y;

    Point pt;
    pt.setX(3);
    pt.print();
    
    Point pt2(1,2);
    pt2.setX(5);
    pt2.print();

     // 系统为我们自动提供了一个赋值运算符函数
    pt = pt2;
    pt.print();

    return 0;
}
