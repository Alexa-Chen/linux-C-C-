#include <iostream>
#include <string>
#include <limits>
using namespace std;


void printCin()
{

	         //0
	cout << "badit :" << cin.bad() << endl;
	         // 0
	cout << "failbit:" << cin.fail() << endl;
	       // 0
	cout << "eofbit :" << cin.eof() << endl;
	       // 1
	cout << "goodbit :" << cin.good() << endl;

	//如果goodbit 变为0  则不正常
}


int  main1()
{

	int num;

	printCin();
	while (cin >> num)
	{
		cout << "num = " << num << endl;
	}
	printCin();
	//重置流的状态 之后 输入缓冲区中还有数据 
	cin.clear();
	//遇到 \n 把之前所有数据都清空 如果没有超过1024
	cin.ignore(1024,'\n');  // 还要清空缓冲区
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	printCin();
	
	string str;
	cin >> str; // cin 对象是有缓冲区的
	cout << str << endl;
	
	cin.get();
	cin.get();

	return 0;
}