#include <iostream>

using namespace std;


class Array
{
public:
	//��ʼ���б�һ��Ҫ���Ա������˳��һ��
	// ����size�᲻ȷ��
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

