 ///
 /// @file    Computer.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-22 22:05:33
 ///

// 当实参和形参都是对象 进行形参和实参的结合时
// 会调用复制构造函数
// 所以复制构造函数的参数一定要用引用
// 否则会产生递归
 
#include <string.h>
#include <iostream>

using std:: cout;
using std:: endl;
class Computer
{
    public:
       Computer(const char* brand,int price)
       :_price(price)
       {
           _brand = new char[strlen(brand)+1];
           strcpy(_brand,brand);
       }                
       
#if 0
       // 复制构造函数 有系统提供的
       Computer(const Computer & rhs)
       : _brand(rhs._brand) //浅拷贝
       , _price(rhs._price)
       {
            cout << "Computer(const Computer & rhs) -" << cout;

       }  
#endif 
       //复制构造函数-- 是显示定义的
       //如果参数的形式是对象（值传递） 则会发生无线递归 直到栈溢出 
       //因为 值传递的时候始终都没有进行初始化
       //所以参数只能是引用 可以打破无线递归
       //computer(const Computer rhs)
       Computer(const Computer & rhs)
       {
            //深拷贝
            _brand = new char[strlen(rhs._brand)+1];
            strcpy(_brand,rhs._brand);
            cout << "Computer( const Computer & hhs)" << endl;
       }
        
       ~Computer()
       {
            cout << "~Computer()" << endl;
            delete [] _brand;
       }
 
       void print();
    private:
        char* _brand;
        int   _price;
};

void Computer::print()
{
    cout << "品牌 " << endl;
    cout << "价格"  << endl;

}


int main()
{
    Computer computer("Lenovo",6000);
    computer.print();
    
    Computer computer2 = computer;
    computer2.print();

    return 0;
}





