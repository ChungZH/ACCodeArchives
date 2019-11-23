#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int n, a[100005], useful;
long long f[100005][105];

int main()
{
    freopen("1920.in", "r", stdin);
    freopen("1920.out", "w", stdout);
    cin >> n;

    for (int i = 1; i<= n; i++)
    {
        int x;
        cin >> x;
        if (x <= 100) a[++useful] = x;
    }

    f[0][0] = 1;
    for (int i = 1; i <= useful; i++)
    {
        f[i][0] = 1;
        for (int j = 1; j <= 100; j++)
        {
            f[i][j] = f[i-1][j];
            if (j >= a[i]) f[i][j] += f[i-1][j-a[i]];
        }
    }

    cout << f[useful][100] << endl;
    return 0;
}
