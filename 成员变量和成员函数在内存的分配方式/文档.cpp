/*
   成员函数和成员变量在内存中存放的方式

   成员函数都放在 代码区 

*/

#include <iostream>
using namespace std;


class Cell
{
public:
	void print(); // 代码区

// 注意字节对齐   static 在全局静态区 
private:
	int a;
	char b;
	float c;
	double d;
	short e[5];
	char & f;
	double & g;
	static int h;
};

int Cell::h = 0;


class Empty
{
	// 空累占据1个字节 
	//为了区分不同对象 根据不同的地址值 

};
int main()
{   
	
	cout << "sizeof(Empty) = " << sizeof(Empty) << endl;
	cout << "sizeof(Cell) = " << sizeof(Cell) << endl;
}
