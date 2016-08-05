#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &vecInt)
{
	cout << "vecInt size" << vecInt.size() << endl;
	cout << "vecInt capacity" << vecInt.capacity() << endl;

}

int main()
{

	// GNU_GCC 编译器实现的vector 扩容机制策略
	// 在原来的容量基础上乘以2
	/*
	   1 先开辟capacity *2
	   2 然后将原来的数据复制到新的空间
	   3 最后再将最新的数据添加到vector末尾
	*/

	vector<int> vecInt;
	//开辟1000个空间 可以防止频繁的进行扩容操作
	vecInt.reserve(1000);
	display(vecInt);
	vecInt.push_back(1);
	display(vecInt);
	vecInt.push_back(2);
	display(vecInt);
	vecInt.push_back(3);
	display(vecInt);
	vecInt.push_back(4);
	display(vecInt);
	vecInt.push_back(5);
	display(vecInt);
	vecInt.push_back(6);
	display(vecInt);
	vecInt.push_back(7);
	display(vecInt);
	vecInt.push_back(8);
	display(vecInt);

	for (int idx = 0; idx != vecInt.size(); ++idx)
	{
		cout << vecInt[idx] << endl;
	}


	cin.get();

	return 0;
}