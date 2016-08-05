/*
   ����ģʽ
   Ҫ�� �� ���ڴ�֮�� ֻ�ܴ���һ������ 
       1�� ������ջ����
	       --> �����캯������private����

       2�� Ҳ������ȫ�ֶ��� 
	   
	   3��ֻ���ǶѶ��� 

       4����Ҫһ��static���ݳ�Ա �������Ѿ������õö���	�׵�ַ

	   5��ÿһ�ε��� getInstance()��Ա����ʱ�����ظþ�̬�����ݳ�Ա

*/ 


#include <iostream>
using namespace std;


class Singleton
{
public:
	static  Singleton * getInstance()
	{
		if (_pInstance == NULL)
		{
			_pInstance = new Singleton;
		}

		return _pInstance;
	}
	
	static void destory()
	{
		delete _pInstance;
	}

	void print()
	{
    
	}

//private:
//	static Singleton * _pInstance;
private:
	static Singleton * _pInstance;
	Singleton()
	{
		cout << "Singleton()" << endl;
	    
	}

	~Singleton()
	{
	
	}

};

Singleton*  Singleton::_pInstance = NULL;
//Singleton ss1;  Ҳ������ȫ�ֶ���

int main()
{
	//Singleton s1;   // ϣ������䲻�ܱ���ͨ��
	
	    // ��������ִ�� ��Ϊ���캯��Ϊ˽��
	    // ����ǹ��� �Ϳ���new ���ü�������
	    // �ⲻ���Ϲ��
	  // ϣ������䲻������ִ��
	 //Singleton *p1 = new Singleton;
	Singleton *p1 = Singleton::getInstance();
	Singleton *p2 = Singleton::getInstance();

	cout << "p1 = " << p1 << endl;
	cout << "p1 = " << p2 << endl;
	
	Singleton::getInstance()->print();
	Singleton::destory();
	
	cin.get();
	return 0;
}