#include <iostream>
using namespace std;

class  Point
{

public:
#if 0
	//ϵͳ���Զ���Ĭ�Ϲ��캯��
	Point()
	{
		_ix = 0;
		_iy = 0;
	}

#endif
	// Ĭ�Ϲ����������

	Point(int x = 0, int y = 0)
	{
		// Ĭ�ϴ����޲� 
	}

	void print()
	{
		cout << "(" << _ix
			<< "," << _iy
			<< ")" << endl;
	}

private:
	int _ix;
	int _iy;
};