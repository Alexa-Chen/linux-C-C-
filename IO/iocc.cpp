#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

	string s1;
	while (getline(cin, s1))
	{
		cout << "s1 = " << s1 << endl;
	}

	system("pause");
}