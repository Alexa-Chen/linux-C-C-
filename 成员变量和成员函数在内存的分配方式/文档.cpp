/*
   ��Ա�����ͳ�Ա�������ڴ��д�ŵķ�ʽ

   ��Ա���������� ������ 

*/

#include <iostream>
using namespace std;


class Cell
{
public:
	void print(); // ������

// ע���ֽڶ���   static ��ȫ�־�̬�� 
private:
	int a;
	char b;
	float c;
	double d;
	short e[5];
	char & f;
	double & g;
	static int h;
};

int Cell::h = 0;


class Empty
{
	// ����ռ��1���ֽ� 
	//Ϊ�����ֲ�ͬ���� ���ݲ�ͬ�ĵ�ֵַ 

};
int main()
{   
	
	cout << "sizeof(Empty) = " << sizeof(Empty) << endl;
	cout << "sizeof(Cell) = " << sizeof(Cell) << endl;
}
