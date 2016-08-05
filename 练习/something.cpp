#include <iostream>
using namespace std;


class Csomething
{
public:
	Csomething()
	{
		cout << "csomething()" << endl;
	}
	Csomething(int isx)
	{
		cout << "CSomething(int )" << endl;
	}
	~Csomething()
	{
		cout << "~Csomething()" << endl;
	}
	Csomething(const Csomething & rhs)
	{
		cout << "Csomething(const CSmrthing)" << endl;
	}

};


int main()
{
	Csomething b(2); // 1
	Csomething c[3]; //  3
	Csomething &ra = b;  
	Csomething d = b;  // 1 复制构造函数
	Csomething *pA = c;
	Csomething *p = new Csomething(4);//1
 
	cin.get();
	return 0;
}