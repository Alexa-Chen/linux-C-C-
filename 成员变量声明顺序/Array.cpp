#include <iostream>

using namespace std;


class Array
{
public:
	//初始化列表一定要与成员变量的顺序一致
	// 这样size会不确定
	Array(int size)
		:_size(size)
		, pdata(new char[_size])
	{
		
	}

	void print()
	{
	  
	}

private:
	char *pdata;
	int _size;

};

int main()
{
	Array array(100);
	system("pause");
	return 0;

}

