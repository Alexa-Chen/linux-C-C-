#include <iostream>
using namespace std;


class Point
{
public:
	// ��ʼ�����ʽ
	Point()
	: _ix(0)
	, _iy(0)
	{
		cout << "Point()" << endl;
	}
	//��ʼ����ʱ��  ���� �������ݳ�Ա��˳���� 
	Point(int ix, int iy)
		:_ix(ix)   // ������ʼ����Ա
		, _iy(iy)
	{
		//_ix = ix; // ��ֵ����
	}

private:
	int _ix;
	int _iy;
};