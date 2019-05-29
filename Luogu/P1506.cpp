// [P1506 拯救oibh总部] https://www.luogu.org/problemnew/show/P1506
#include <iostream>

using namespace std;

int a[505][505];
int n, m, ans;
const int dx[4] = {0, 0, 1, -1},
          dy[4] = {1, -1, 0, 0};

void dfs(int x, int y);

int main()
{
    char c;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> c;
            if (c == '0')
            {
                a[i][j] = 0;
            } else if (c == '*') {
                a[i][j] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i][1] == 0)
            dfs(i, 1);
        if (a[i][m] == 0)
            dfs(i, m);
    }
    for (int i = 1; i <= m; i++)
    {
        if (a[1][i] == 0)
            dfs(1, i);
        if (a[n][i] == 0)
            dfs(n, i);
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 0)
                ans++;
        }
    }

    cout << ans;
    return 0;
}

void dfs(int x, int y)
{
    a[x][y] = 2;

    for (int i = 0; i < 4; i++)
    {
        int tx = x + dx[i], ty = y + dy[i];
        if (a[tx][ty] == 0 && tx >= 1 && tx <= n && ty >= 1 && ty <= m)
        {
            dfs(tx, ty);
        }
    }
}
