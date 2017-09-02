#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int people[100] = { 0 }, k;
	while (cin>>k)
	{
		if (k == 0)break;
		int n = 2 * k;
		int m = 1;
		people[0] = 0;
		for (int i = 1; i <= k; i++)
		{
			people[i] = (people[i - 1] + m - 1) % (n - i + 1);
			if (people[i] < k)
			{
				i = 0;
				m++;
			}
		}
		cout << m << endl;
	}
	return 0;
}