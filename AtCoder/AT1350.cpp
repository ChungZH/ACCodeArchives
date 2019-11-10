// [AT1350 深さ優先探索] https://www.luogu.org/problem/AT1350
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n, m;
int sx, sy;
int ex, ey;
char a[505][505];
const int dxy[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool flag = 0;
void dfs(int x, int y)
{   
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dxy[i][0], ny = y + dxy[i][1];
        if (a[nx][ny] != '#' && a[nx][ny] != '6' && nx >= 1 && nx <= n && ny >= 1 && ny <= m)
        {
            a[nx][ny] = '6';
            dfs(nx, ny);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 's')
            {
                sx = i;
                sy = j;
            } else if (a[i][j] == 'g') {
                ex = i;
                ey = j;
            }
        }
    }
    dfs(sx, sy);
    if (a[ex][ey] == '6')
    {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}