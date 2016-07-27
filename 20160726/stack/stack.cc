 ///
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-26 21:47:04
 ///

//栈的操作
#include <iostream>
using namespace std;

class Stack
{
    public:
        Stack();
      void  import(int n);
      void   outstack();
        int gettop()
        {
            return data[top];
        }

    private:
        int data[10];
        int top;
};


Stack ::Stack()
{
    top = 0;
}

 void  Stack :: import(int n)
{
    data[++top] = n;
}
 void  Stack :: outstack()
{
   top--;
}

int main()
{
    Stack s;
    s.import(10);
    s.import(12);
    s.import(14);
    s.gettop();

    cout << s.gettop() << endl; 
    s.outstack();
    cout << s.gettop() << endl;



}


