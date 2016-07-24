 ///
 /// @file    static.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-24 23:51:25
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class X
{
    public:
    X() 
    : _ix(0)
    {

    }
    X(int ix)
    : _ix(ix)
    {
    
    }  
  
    void print()
    {
    cout << "X :: _ix = " << _ix << endl;
    }    
 private:
     int _ix;
};

class Computer 
{
    public:
        Computer(float fprice)
        :_fprice(fprice)
        {
           _totalPrice += _fprice; 
        } 
        ~Computer()
        {
            _totalPrice -=_fprice;
        }
        void print()
        {
            cout << "总价：" << _totalPrice << endl;
        }

        void printX()
        {
          _x.print();   
        }

    private:
        float _fprice;
        //静态数据成员的初始化必须放在
        //类的外部，不能放在初始化列表里
        
        static float _totalPrice;
        static X _x;
}; 

// 共享的数据 由整个类共享
float Computer:: _totalPrice = 0;
X Computer :: _x(1);


int main()

{
    Computer pc1(5000);
    cout << "sizeof(pc1) = " << sizeof(pc1) << endl;
    cout << endl;
    pc1.print();

    Computer pc2(4000);
    pc2.print();

    pc1.printX();

    return 0;
}




