// [SMOJ 1919] 
// 2019/11/02 -> 2019/11/09 创新班 
// 递推 第二题 
// 给你n个正整数，每个数可选或不选，问可以选一些数它们的和可以生成多少100以内的不同数？ 

/*
和上一题基本一样，只是 100 以内。
*/

#include <bits/stdc++.h>
using namespace std;
int ans = 1;
bool f[100003][103];
int a[100003];
int main()
{
	freopen("1919.in", "r", stdin);
	freopen("1919.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int t;
		cin >> t;
		
		if (t <= 100)
			a[i] = t;
	} 
	f[0][0] = true;
	for (int i = 1; i <= n; i++)
	{
		f[i][0] = true;
		for (int j = 1; j <= 100; j++)
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
	
	int ans = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (f[n][i] == true) ans++;
	}
	
	cout << ans << endl;
	return 0;
}
