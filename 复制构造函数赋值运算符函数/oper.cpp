#include <iostream>
using std::cout;
using std::endl;

/*
    ���ƹ��캯��   
	 point(const point & rhs);

	 ��������� �����  

      1�� ��һ�������Ѿ����� ��Ҫ�����ʼ��
	  ��һ������ʱ Ҫ��ʼ��
	  Point pt1(1,2);
	  Point pt2 = pt1;
	  Point pt3(pt1);
	  2��
	  ���β��Ƕ���ʱ ��ʵ�����βν��н��ʱ
	  void fun(Point pt);ֵ����
	  Point pt = pt1;
	  3������������ֵ�Ƕ��� ִ��return ���ʱ
	   �鿴rvo �Ż�  -fno-elide-constructors
	  Point getPoint()
	  {
	     Point pt(3,4);
		 return pt;
	  }

	  Point(const Point rhs) �ᷢ�����޵ݹ�
	  ���� ����Ϊ����
	  Point(const Point & rhs)

	  
	  
	  ��ֵ���������

	  Computer & operator=(const Computer &rhs)
	  {
	    //����ֵ�Ƕ���Ҳ���� ���ǽ���Ч��
		�����ظ�����ʱ��Ҫ���ø��ƹ��캯��
		������仯 Ҫ��������

	  }

	  
	   class Computer
	   {

	    public:
		Computer(const Computer & rhs)
		:_price(rhs._price)
		{
		   _brand = new char[strlen(rhs._brand)];
		   strcpy(_brand,rhs._brand);
		}


		Computer & operator= (const Computer &rhs)
		{
		     //�Ը���
			if(this != &rhs)
			{
			    ����������󶼴��� ��Ҫdelete ԭ������Ŀռ䣨���������
			    delete [] _brand;
				_brand = new char[strlen(rhs._brand)+1];
				strcpy(_brand,rhs._brand);

			}
		
		}
	      private:
		  char 8 _brand;
		  int _price;
	   };

	   computer pc1("1" ,33);
	   computer pc2("2" 44);
	   pc2 = pc1;



	  Computer & operator(const Computer & rhs)
	  {
	  
	  
	  }

*/

class Point
{
public:
	Point()
		:_ix(0)
		,_iy(0)
	{

	}
	Point(int ix, int iy)
		:_ix(ix)
		, _iy(iy)
	{
	 
	}

	// ���ƹ��캯��
	Point(const Point & rhs)
		:_ix(rhs._ix)
		,_iy(rhs._iy)
	{
	
	}

	// ϵͳΪ�����ṩ�ĸ�ֵ���������
	Point & operator= (const Point & rhs)
	{
		this->_ix = rhs._ix;
		this->_iy = rhs._iy;
		return *this;
	}

	~Point()
	{
	
	}

	// this ָ�� ----> ���صĲ���

	void  setX(/*Point * const this*/ int ix)
	{
		this->_ix = ix;
	}


	void print()
	{
	
	}
private:
	int _ix;
	int _iy;
};

int test(void)
{

	double x = 5.0;
	double y = x;

	Point pt1(1, 2);
	pt1.print();

	Point pt2 = pt1;
	pt2.print();

	return 0;
}
int main(void)
{
	double x = 5.0;
	double y = 6.0;
	x = y;

	Point pt;
	pt.setX(3);
	pt.print();


	Point pt2(1, 2);
	pt2.setX(5);
	pt2.print();

	pt = pt2;//ϵͳΪ�����Զ��ṩ��һ����ֵ���������
	pt.print();


	return 0;
}


