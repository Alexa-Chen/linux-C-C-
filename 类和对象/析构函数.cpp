#include <iostream>

using namespace std;


class Point
{
public:
	Point()
		:_ix(0)
		,_iy(0)
	{
		cout << "Point()" << endl;
	}

	Point(int x, int y)
		:_ix(x)
		,_iy(y)
	{
		cout << "Point(int ,int)" << endl;
	}

	~Point()
	{
		cout << "~Point()" << endl;
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

Point globalPt; // ȫ�ֶ���Ҳ���Զ������������� 

int mainrty()
{
	Point pt; // ����������ʱ �Ż��Զ����ù��캯��
	pt.print();
	Point pt2(1, 2);
	pt2.print();
	
	//�Ѷ������� ������delete
	int *pa = new int(3);
	delete pa;

	Point *p = new Point(3, 4);
	p->print();
	delete p;


	return 0;

}

