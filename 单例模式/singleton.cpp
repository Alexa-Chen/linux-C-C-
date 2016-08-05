/*
   单例模式
   要求 ： 在内存之中 只能创建一个对象 
       1， 不能是栈对象
	       --> 将构造函数放在private区域

       2、 也不能是全局对象 
	   
	   3、只能是堆对象 

       4、需要一个static数据成员 来保存已经创建好得对象	首地址

	   5、每一次调用 getInstance()成员函数时都返回该静态的数据成员

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
//Singleton ss1;  也不能是全局对象

int main()
{
	//Singleton s1;   // 希望该语句不能编译通过
	
	    // 不能正常执行 因为构造函数为私有
	    // 如果是公有 就可以new 出好几个对象
	    // 这不符合规矩
	  // 希望该语句不能正常执行
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