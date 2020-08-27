// [SMOJ 1921]
// 2019/11/02 -> 2019/11/23 创新班
//  给你n个正整数，每个数可选或不选，要求选一些数，使它们的和为S，输出任意一种方案。

#include <bits/stdc++.h>
using namespace std;
bool f[1005][10005]; // f[i][j]=true 表示前i枚硬币能凑成j元
bool g[1005][10005]; // g[i][j]=true 表示前i枚硬币能凑成j元，可以取第i枚硬币
int a[1005];

void print(int nn, int sum) // 递归打印方案
{
    if (sum == 0)
        return;
    if (g[nn][sum] == true) {
        cout << a[nn] << ' ';
        print(nn - 1, sum - a[nn]);
    } else
        print(nn - 1, sum);
}

int main()
{
    freopen("1921.in", "r", stdin);
    freopen("1921.out", "w", stdout);
    int n, s;
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    f[0][0] = true;
    for (int i = 1; i <= n; i++) // 前i枚硬币能凑成多少种不同的情况
    {
        f[i][0] = true; // 能凑成0元
        for (int j = 1; j <= 10000; j++) // 前i枚硬币能否凑出j元？
        {
            if (f[i - 1][j] == true) // 如果前i-1枚硬币已经凑出j元
            {
                f[i][j] = true;
            } else { // 前i枚硬币凑不出j元
                if (j >= a[i] && f[i - 1][j - a[i]] == true) // 如果前i-1枚硬币能凑出j-a[i]元，本次取第i枚硬币就能凑出j元
                {
                    f[i][j] = true;
                    g[i][j] = true;
                }
            }
        }
    }

    if (f[n][s] != true) {
        cout << -1 << endl;
    } else {
        print(n, s);
    }
    return 0;
}
