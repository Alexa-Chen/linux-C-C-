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
	//��ֻ��������һ��ָ������ 
	//û�е����κζ���
	PAT(*ad)[3];


	cin.get();
	return 0;
}