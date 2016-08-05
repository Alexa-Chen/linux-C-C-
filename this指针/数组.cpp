#include <iostream>
using namespace std;

class Point
{
public:
	Point()
		: _ix(0)
		, _iy(0)
	{
		cout << "Point()" << endl;
	}

	Point(int ix, int iy)
		: _ix(ix)
		, _iy(iy)
	{
		cout << "point(int int)" << endl;
	}

	Point(const Point & rhs)
		: _ix(rhs._ix)
		, _iy(rhs._iy)
	{
		
	}

	Point & operator=(Point const & rhs)
	{
		_ix = rhs._ix;
		_iy = rhs._iy;
		
		return *this;
	}

	~Point()
	{
		cout << "~Point()" << endl;
	}

	void print()
	{
	
	}

private:
	int _ix;
	int _iy;
};


int main()
{
	//Point ptArr[5];
	Point ptArr2[2] = { Point(1, 2), Point(3, 4) };
	ptArr2[0].print();
	ptArr2[1].print();

	//���������� (�ֽ���ʱ����)����֮�����ϻᱻ����
	Point (1, 2);
	// ������󲻳�ʼ�� Ҳ���Զ������޲ι��캯��
	Point ptArr3[5] = { Point(1, 2), Point(3, 4) };


	
	cin.get();
	return 0;
}

