 ///
 /// @file    inline.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-22 19:58:01
 ///
 
#include <iostream>
using std::cout;
using std::endl;
//发生在预处理时
//#define max(a,b)  (a > b ? a:b)

class A
{
    public:
        //inline 函数 和define一样
        //提升效率 减少开销 
        //调用函数时他会保存main函数现场耗费时间
        //用inline 他会把max（）直接替换a>b?a:b 直接 替换
        inline int max(int a,int b)
        {
            return a > b ? a : b;
        }   
};

//inline 和带参数的宏定义有相同的功能
//
inline  int min(int a,int b)
{
    return a < b ? a : b;
}


int main()
{
    A a;
 cout   << a.max(3,4) << endl;
  cout <<   min(3,4) << endl;
    return 0;
}



