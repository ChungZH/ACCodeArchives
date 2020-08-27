// [P1434 [SHOI2002]滑雪] https://www.luogu.com.cn/problem/P1434
#include <iostream>
#include <algorithm>
// #include <cstring>
using namespace std;
int r, c, ans;
int a[202][202];
int aans[202][202];
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

int dfs(int x, int y)
{
    if (aans[x][y] != 0) return aans[x][y];

    aans[x][y] = 1;
    int tx, ty;
    for (int i = 0; i < 4; i++)
    {
        tx = x+dx[i];
        ty = y+dy[i];

        if (tx < 1 || tx > r || ty < 1 || ty > c || a[x][y] <= a[tx][ty]) continue;
        
        dfs(tx, ty);
        aans[x][y] = max(aans[x][y], aans[tx][ty]+1); 
    }

    return aans[x][y];
}

int main()
{
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            ans = max(ans, dfs(i, j));
        }
    }

    cout << ans << endl;
    return 0;
}
