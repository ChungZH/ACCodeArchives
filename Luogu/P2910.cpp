// [P2910 [USACO08OPEN]寻宝之路Clear And Present Danger] https://www.luogu.org/problem/P2910
#include <algorithm>
#include <iostream>
using namespace std;

int n, m;
int a[10003], g[10003][10003];

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i != j && i != k && j != k && g[i][j] > g[i][k] + g[k][j]) {
                    g[i][j] = g[i][k] + g[k][j];
                }
            }
        }
    }

    int ans = 0;

    for (int i = 2; i <= m; i++) {
        ans += g[a[i - 1]][a[i]];
    }

    cout << ans << endl;
    return 0;
}