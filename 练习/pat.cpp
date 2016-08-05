#include <iostream>
using namespace std;


class PAT
{
public:
	PAT()
	{
		cout << "PAT()" << endl;
	}
	~PAT()
	{
		cout << "~PAT()" << endl;
	}

};


int main1()
{
	//它只是声明了一个指针数组 
	//没有调用任何东西
	PAT(*ad)[3];


	cin.get();
	return 0;
}