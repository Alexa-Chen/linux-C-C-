#include <iostream>
#include <limits>
using namespace std;

/*
   ctrl +c  中断
   ctrl + d  到达文件末尾
   ctrl + z  将程序后台执行    fg 恢复
*/
int main2()
{
	int ival;
	// eof 到达文件的末尾
	while (cin >> ival, !cin.eof())
	{
		   // bad 系统级别故障 无法恢复
		if (cin.bad())
		{
			cout << "IO corrupted" << endl;
			return -1;
		}     // fail 可恢复
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
