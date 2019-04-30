// [P1605 迷宫] https://www.luogu.org/problemnew/show/P1605
#include <iostream>
using namespace std;

void dfs(int x, int y);
int ans, n, m, t;
int sx, sy, fx, fy;
int a[10][10];
bool book[10][10];
const int dx[4] {-1, 1, 0, 0},
          dy[4] {0, 0, -1, 1};

int main()
{
    cin >> n >> m >> t;
    cin >> sx >> sy >> fx >> fy;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;

        a[x][y] = -1;
    }

    book[sx][sy] = 1;    

    dfs(sx, sy);

    cout << ans << endl;
    return 0;
}

void dfs(int x, int y)
{
    if (x == fx && y == fy)
    {
        ans++;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int tx = x+dx[i], ty = y+dy[i];

        if (tx < 1 || tx > n || ty < 1 || ty > m) continue;

        if (book[tx][ty] == 0 && a[tx][ty] != -1 && tx <= n && tx >= 1)
        {
            book[tx][ty] = 1;
            dfs(tx, ty);
            book[tx][ty] = 0;
        }
    }
}
