// [P1161 开灯] https://www.luogu.org/problemnew/show/P1161
#include <bits/stdc++.h>
using namespace std;
bool flag[2000000];
int main()
{
	double a;
	int t;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a >> t;
		
		for (int j = 1; j <= t; j++)
		{
			flag[int(a*j)] = 1 - flag[int(a*j)];
		}
	}
	
	for (int i = 1; ; i++)
	{
		if (flag[i] == 1)
		{
			cout << i << endl;
			return 0;
		}
	}
	
	return 0;
}
