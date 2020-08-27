#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("1935.in", "r", stdin);
    freopen("1935.out", "w", stdout);
    int n, m;
    cin >> n >> m;

    int a[n + 3][m + 3], f[n + 3][m + 3];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    f[n][m] = a[n][m];
    for (int j = m - 1; j > 0; j--) {
        f[n][j] = a[n][j] + f[n][j + 1];
    }

    for (int i = n - 1; i > 0; i--) {
        f[i][m] = a[i][m] + f[i + 1][m];
        for (int j = m - 1; j > 0; j--) {
            f[i][j] = a[i][j] + min(f[i + 1][j], f[i][j + 1]);
        }
    }

    cout << f[1][1] << endl;
    return 0;
}
