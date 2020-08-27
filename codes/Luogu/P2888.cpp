// [P2888 [USACO07NOV]牛栏Cow Hurdles] https://www.luogu.org/problem/P2888
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int n, m, t;
int a[403][403];
const int INF = 0x7fffffff;

int main()
{
    cin >> n >> m >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = INF;
        }
    }

    for (int i = 0; i < m; i++) {
        int s, e, h;
        cin >> s >> e >> h;
        a[s][e] = h;
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (k != i && k != j && i != j && a[i][j] > max(a[i][k], a[k][j])) {
                    a[i][j] = max(a[i][k], a[k][j]);
                }
            }
        }
    }

    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        if (a[x][y] != INF) {
            cout << a[x][y] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}