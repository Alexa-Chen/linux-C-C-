#include <iostream>
using std::cout;
using std::endl;

int main()
{

	// ǿת C�ķ�ʽ
	int a = 3;
	double b = (double)a;
	double c = double(a);
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	// c++ �ķ�ʽ
	//�����ļ���������
	// cat �ļ��� | grep (Ҫ�ҵ�����)static_cast
	double d = static_cast<int>(a);//z�����������
	cout << "d = " << d <<endl;

	
	int e = static_cast<int>(a);
	cout << "e = " << e << endl;


	void *pa = malloc(4);
	int *pb = static_cast<int *>(pa);
	*pb = 10;
	delete pb;

 	//const_cast 
	// dynamic_cast 
	//reinterpret_cast ��������������ת��

	double  bd = 5.5;
	 //Σ��
	int *pd = reinterpret_cast<int *>(&bd);
	cout << "*pd = " << *pd << endl;
 




	system("pause");
	return 0;
}