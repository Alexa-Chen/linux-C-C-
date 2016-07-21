 ///
 /// @file    io.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-21 23:48:59
 ///
 
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int a
    cin >> a;
    cout << "a = " << a ;
    string s1;
   // cin 遇空白 就结束 开始的不算   
  //  while(cin >> s1)
     // 读取一行 
    while(getline(cin,s1))
    {
       cout << s1 ;
    }
    return 0;
}


