 ///
 /// @file    point3.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-23 09:18:09
 ///
 
#include <iostream>
using std:: cout;
using std:: endl;

class Point
{
public:
    Point()
    :_ix(0)
    ,_iy(0)
    {
        cout << "Point()---" << cout;
    }
#if 1
    //该函数要进行显示调用 explicit禁止隐式转换
    explicit 
    Point(int ix)
    : _ix(ix)
    , _iy(0) 
    {
        cout << "point(int x)" << endl;
    }
    
#endif
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
    Point pt2 = 1;  // 发生了隐式转换
    pt2.print();
    return 0;
}


