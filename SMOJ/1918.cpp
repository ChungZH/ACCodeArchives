// [SMOJ 1918] 
// 2019/11/02 -> 2019/11/09 创新班 
// 递推 第一题 
// 给你 n 个钱币，去一个不找钱的商场买东西，你可以买多少种价格的物品？ 
 
/*
f[i][j] 表示用前i枚硬币是否能能够凑出 j 元
f[i][j] = true 至少要满足以下两个条件之一： 
1. 不用第 i 枚硬币，则要满足 f[i-1][j] = true
2. 用第 i 枚硬币，则要满足 f[i-1][j-a[i]] = true, j >= a[i] 
*/ 

#include <bits/stdc++.h>
using namespace std;
int ans = 1;
bool f[10003][10003];
int main()
{
	freopen("1918.in", "r", stdin);
	freopen("1918.out", "w", stdout);
	int n;
	cin >> n;
	
	int a[n+3];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	} 
	
	f[0][0] = true;
	
	for (int i = 1; i <= n; i++)
	{
		f[i][0] = true;
		for (int j = 1; j <= 10000; j++)
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
	for (int i = 0; i <= 10000; i++)
	{
		if (f[n][i] == true) ans++;
	}
	
	cout << ans << endl;
	return 0;
}
