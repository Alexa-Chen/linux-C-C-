#include <iostream>
#include <string>
#include <limits>
using namespace std;


void printCin()
{

	         //0
	cout << "badit :" << cin.bad() << endl;
	         // 0
	cout << "failbit:" << cin.fail() << endl;
	       // 0
	cout << "eofbit :" << cin.eof() << endl;
	       // 1
	cout << "goodbit :" << cin.good() << endl;

	//���goodbit ��Ϊ0  ������
}


int  main1()
{

	int num;

	printCin();
	while (cin >> num)
	{
		cout << "num = " << num << endl;
	}
	printCin();
	//��������״̬ ֮�� ���뻺�����л������� 
	cin.clear();
	//���� \n ��֮ǰ�������ݶ���� ���û�г���1024
	cin.ignore(1024,'\n');  // ��Ҫ��ջ�����
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	printCin();
	
	string str;
	cin >> str; // cin �������л�������
	cout << str << endl;
	
	cin.get();
	cin.get();

	return 0;
}