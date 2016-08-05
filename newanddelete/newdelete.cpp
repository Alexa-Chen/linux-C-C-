#include <iostream>
using std::cout;
using std::endl;

/*
   new/delete �� malloc/free ������ 

   1  new/delete ���Ǻ��� �Ǳ��ʽ 
      malloc/free  �ǿ⺯��

   2  new �ȿ��ٿռ� �ٽ��г�ʼ�� ��mallocֻ�Ὺ�ٿռ�
    
   3  malloc ����ֵ�� void��Ҫǿת
      new ���ص�����Ӧ���͵�ָ�� ����ǿת





*/


int main1()
{

#if 0
	// C�е�����
	//֮���ٿռ�
	int *pa = (int*)malloc(sizeof(int)); 
	*pa = 10; // ���Ƴ�ʼ���ز���
	cout << pa << endl;
	cout << *pa << endl;
	free(pa);

#endif 

	// C++ ������ 


	int *pa = new int(10);// ��ɿռ�Ŀ��ٲ��Ҷ����ʼ����
	cout << sizeof(pa) << endl;
	cout << *pa << endl;

	// delete  ���ʽ
	delete pa;

	// ��������Ŀռ�  ���鲻����() ��ֵ
	int *pb = new int[10]();
	for (int idx = 0; idx != 10; ++idx)
	{
		//cout << pb[idx] << endl;
		pb[idx] = idx;
	}

	for (int idx = 0; idx != 10; ++idx)
		cout << pb[idx] << endl;

	// �ͷ�����Ŀռ�
	delete  [] pb;

	system("pause");
	return 0;
} 