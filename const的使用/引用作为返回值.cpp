#include <iostream>
using std::cout;
using std::endl;

int arr[5] = { 0, 1, 2, 3, 4 };

// ������Ϊ��������ֵ
int & fun(int idx)
{
	return arr[idx];
}

// ��fun2 ����ִ����Ϻ� a ��Ϊ�ֲ����� ������
// ���Բ�Ҫ����һ���ֲ����������� 
int & fun2()
{
	int a = 20;
	return a; // �����ͨ��
}


// 11 �Ƕѿռ�ı��� 
//��Ҫ���׷���һ���ѿռ����������
int & fun3()
{
	int *pa = new int(11);
	return *pa;
}

int main()
{
	fun(0) = 10;
	cout << "arr[0] = " << arr[0] << endl;

	int & refa = fun2();
	cout << "refa = " << refa << endl;

	cout << endl;
	
	int a = 1;
	int b = 2;
	int c = 3;
	// fun3���� ������������
	int &d = fun3();
	c = a + b + fun3();//ִ���������ͷ����ڴ�й¶
	delete &d;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}
