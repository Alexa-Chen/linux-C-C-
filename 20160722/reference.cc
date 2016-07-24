 ///
 /// @file    reference.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-24 23:02:15
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
    public:
        //引用数据成员必须要放在初始化列表里面初始化
    Point(int ix,int iy,double & dz)
    : _ix(ix)
    , _iy(iy)
    , _ref1(_ix)
    , _ref2(dz)  
    {
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

int main1()
{
    double dval = 5.0;
    Point pt1(3,4,dval);
    pt1.print();
   
    //此时pt2没有创建  调用 复制构造函数
    Point pt2 = pt1; 
    Point pt3(pt1);
    
    Point pt4(1,2,dval);
  // pt4 = pt1; //调用  操作运算符函数
    return 0;
}

int main()
{
   
   return 0;
}


