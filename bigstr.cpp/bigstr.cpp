#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

#define  N  1000

int main()
{
	char a[N];
	while (cin >> a)
	{
		int len = strlen(a);
		int end = len - 1;
		for (int i = 0; i < end;)
		{
			if (a[i] >= 'A' && a[i] <= 'Z')
			{
				char temp = a[i];
				int idx = i;
				for (int j = i + 1; j < len; j++)
				{
					a[idx++] = a[j];
				}
				a[len - 1] = temp;
				end--;
			}
			else
			{
				i++;
			}
		}
		cout << a << endl;

	}

	cin.get();
}



