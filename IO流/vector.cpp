#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &vecInt)
{
	cout << "vecInt size" << vecInt.size() << endl;
	cout << "vecInt capacity" << vecInt.capacity() << endl;

}

int main()
{

	// GNU_GCC ������ʵ�ֵ�vector ���ݻ��Ʋ���
	// ��ԭ�������������ϳ���2
	/*
	   1 �ȿ���capacity *2
	   2 Ȼ��ԭ�������ݸ��Ƶ��µĿռ�
	   3 ����ٽ����µ�������ӵ�vectorĩβ
	*/

	vector<int> vecInt;
	//����1000���ռ� ���Է�ֹƵ���Ľ������ݲ���
	vecInt.reserve(1000);
	display(vecInt);
	vecInt.push_back(1);
	display(vecInt);
	vecInt.push_back(2);
	display(vecInt);
	vecInt.push_back(3);
	display(vecInt);
	vecInt.push_back(4);
	display(vecInt);
	vecInt.push_back(5);
	display(vecInt);
	vecInt.push_back(6);
	display(vecInt);
	vecInt.push_back(7);
	display(vecInt);
	vecInt.push_back(8);
	display(vecInt);

	for (int idx = 0; idx != vecInt.size(); ++idx)
	{
		cout << vecInt[idx] << endl;
	}


	cin.get();

	return 0;
}