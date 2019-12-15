// [SMOJ 1923] 
// 2019/11/02 -> 2019/11/23 创新班
// 递推 第六题 
// 给你n个正整数，要求你分成2堆，使它们各自的和尽量相同。问2堆的差距最小是多少？ 
 
/*
在 T1 的基础上修改即可 
*/ 
#include <bits/stdc++.h>
using namespace std;
int n, a[1005], sum;
bool f[1003][100003];
int main()
{
	freopen("1923.in", "r", stdin);
	freopen("1923.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
	} 
	
	f[0][0] = true;
	
	for (int i = 1; i <= n; i++)
	{
		f[i][0] = true;
		for (int j = 1; j <= 100000; j++)
		{
			if (f[i-1][j] == true)
			{
				f[i][j] = true;
			}
			if (j >= a[i] && f[i-1][j-a[i]] == true)
			{
				f[i][j] = true;
			}
		}
	}
	
	for (int L = sum/2; L >= 0; L--)
	{
		if (f[n][L] == true)
		{
			int R = sum-L;
			cout << R-L << endl;
			break;
		}
	}
	return 0;
}
