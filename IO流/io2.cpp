#include <iostream>
#include <limits>
using namespace std;

/*
   ctrl +c  �ж�
   ctrl + d  �����ļ�ĩβ
   ctrl + z  �������ִ̨��    fg �ָ�
*/
int main2()
{
	int ival;
	// eof �����ļ���ĩβ
	while (cin >> ival, !cin.eof())
	{
		   // bad ϵͳ������� �޷��ָ�
		if (cin.bad())
		{
			cout << "IO corrupted" << endl;
			return -1;
		}     // fail �ɻָ�
		else if (cin.fail())
		{
			cout << "illegal data,please input again" << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max());
			continue;
		}
		else
		{
			cout << "ival = " << ival << endl;
		}
	}

	cin.get();

	return 0;
}
