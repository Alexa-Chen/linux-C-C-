 ///
 /// @file    computer2.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-24 21:03:30
 ///
 //
 //   当右操作数是对象时 this 的使用注意细节

#include <string.h>
#include <iostream>

using std :: cout;
using std:: endl;

class Computer 
{
    public :
    Computer(const char *brand,float fPrice)
    : _fPrice(fPrice)
    {
        _brand = new char[strlen(brand)+1];
        strcpy(_brand,brand);
    }
    Computer(const Computer & rhs)
    :_fPrice(rhs._fPrice)
    {
        //深拷贝
        _brand = new char[strlen(rhs._brand)+1];
        strcpy(_brand,rhs._brand);
        cout << "Computer(const Computer &)" <<endl;      
    }

    Computer & operator = (const Computer & rhs)
    {
        cout << "Computer & operator = (const Computer &)" << endl;
        if (this == &rhs) // 考虑自复制的问题
            return *this;
        delete [] _brand; // 释放原来左操作数的空间

        // 然后在进行复制
        _brand = new char[strlen(rhs._brand)+1];
       strcpy(_brand,rhs._brand);
       _fPrice = rhs._fPrice;
        return *this;
    }
    ~Computer()
    {
    cout << "~Computer()" << endl;
    delete [] _brand;
    }

    void print();

    private:
        char *_brand;
        char _fPrice;

};

void Computer ::print()
{
    cout << "品牌:" << _brand << endl;
    cout << "品牌:" << _fPrice << endl;
}


int main()
{
    Computer computer("lenove",5000);
    computer.print();


    Computer computer2 = computer;
    computer2.print();

    cout << endl;
    Computer computer3("Mac", 10000);

    //computer2  = computer2;
    computer2 = computer3;

    return 0;
}


