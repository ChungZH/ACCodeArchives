// [P1162 填涂颜色] https://www.luogu.org/problemnew/show/P1162
#include <iostream>

using namespace std;

int n;
int a[35][35];
const int dx[] { -1, 1, 0, 0 },
    dy[] { 0, 0, -1, 1 };

void dfs(int x, int y);

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int j = 1; j <= n; j++) {
        if (a[1][j] == 0) {
            dfs(1, j);
        }
        if (a[n][j] == 0) {
            dfs(n, j);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (a[i][1] == 0) {
            dfs(i, 1);
        }
        if (a[i][n] == 0) {
            dfs(i, n);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 2)
                cout << 0 << ' ';
            else if (a[i][j] == 0)
                cout << 2 << ' ';
            else
                cout << 1 << ' ';
        }
        cout << endl;
    }

    return 0;
}

void dfs(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > n || a[x][y] != 0) {
        return;
    } else {
        a[x][y] = 2;
    }

    for (int i = 0; i < 4; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];

        dfs(tx, ty);
    }
}
