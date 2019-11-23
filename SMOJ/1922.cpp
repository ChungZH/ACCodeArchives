// [SMOJ 1922] 
// 2019/11/02 -> 2019/11/23 创新班
// 递推 第五题 
// 给给你n个整数，每个数可选或不选，要求选一些数，使它们的和为S，问有多少种方案？ 
 
/*
在 T3 的基础上修改，注意负数，偏移 10000 
*/ 
#include <bits/stdc++.h>

using namespace std;

int n, s, a[105], useful;
long long f[105][20005];
int dt = 10000;

int main()
{
    freopen("1922.in", "r", stdin);
    freopen("1922.out", "w", stdout);
    cin >> n >> s;

    for (int i = 1; i<= n; i++)
    {
        cin >> a[i];
    }

    f[0][0+dt] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[i][0+dt] = 1;
        for (int j = 1; j <= 10000+dt; j++)
        {
            f[i][j] = f[i-1][j];
            if (j >= a[i]) f[i][j] += f[i-1][j-a[i]];
        }
    }

    cout << f[n][s+dt] << endl;
    return 0;
}
