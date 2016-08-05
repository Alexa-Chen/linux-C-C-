#include <iostream>
using namespace std;


class Point
{
public:
	
	Point()
		: _ix(0)
		, _iy(0)
	{
	
	}
	Point(int ix, int iy)
		: _ix(ix)
		, _iy(iy)
	{
	
	}

	~Point()
	{
	
	}

	Point  (const Point & rhs)
		: _ix(rhs._ix)
	    , _iy(rhs._iy)
	{

	}

	Point & operator = (const Point & rhs)
	{
		_ix = rhs._ix;
		_iy = rhs._iy;
	
	}
	//��const��Ա�������治���޸Ķ���ķǾ�̬���ݳ�Ա
	// ���ܵ��÷�const�汾�ĳ�Ա����

	// const ��Ա����
	void print(/*Point const * const this*/) const
	{
		// ����this ָ�벻���޸� ����
		//_ix = 10; //error 
		cout << "(" << _ix
			<< "," << _iy
			<< ")" << endl;
	}


	// �����������������
	void print()
	{
		cout << "(" << _ix
			<< "," << _iy
			<< ")" << endl;
	
	}
	
	
	// Point * const this 
	void setX(int ix)
	{
		this->_ix = ix;
	}

private:
	int _ix;
	int _iy;
};

int main()
{
	Point pt(1, 2);
	//��const������Ե��� const ��Ա����
	// ��������  �͵���ƥ����Ǹ�
	pt.print();

	// const �汾ֻ�ܵ���const��Ա���� 
	const Point pt2(1, 2);
	pt2.print();
	//const�����ܵ��÷�const��Ա����
	//pt2.setX();
	system("pause");
	return 0;
}








