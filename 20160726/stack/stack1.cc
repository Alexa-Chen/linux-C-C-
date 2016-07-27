 ///
 /// @file    stack1.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-26 22:05:00
 ///
 
#include <iostream>
using namespace std;

class Stack
{
    public:
        Stack()
        {
            top = -1; 
        }
        bool push(int n) // 压栈
        {
            if(!isfull())
                data[++top] = n;
                else
                    return false;
                return true;
        }
     
        bool pop()  // 退栈
        {
            if(!isempty())
                top--;
            else
                return false;
            return true;
        }
        int gettop() //取出栈顶元素
        {
            return data[top];
        }
        bool isempty() // 判断是否为空
        {
            return top == -1 ? true:false;
        }

        bool isfull() // 判断是否已满
        {
            return top == 9 ? true: false;
        }

    private:
        int data[10];
        int top;
};


int main()
{
    Stack s; // 建栈
    if(!s.push(10)) // 将10 入栈
    {
        cout << "stack over flow!" << endl;
        return 0;
    }
    if(!s.push(12))
    {
        cout << "Stack over flow!" << endl;
        return 0;
    }

    if(!s.push(14)) 
    {
        cout << "stack over flow!" << endl;
        return 0;
    }

     //读出并输出栈顶元素
    cout << s.gettop() << endl;
     s.pop(); // 退栈
     cout << s.gettop() << endl;


    
    return 0;
}

