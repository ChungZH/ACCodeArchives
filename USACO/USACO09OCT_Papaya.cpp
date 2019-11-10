// [P2958 [USACO09OCT]木瓜的丛林Papaya Jungle] https://www.luogu.org/problem/P2958
#include <iostream>
#include <cstring>
using namespace std;

int r, c, ans;
int a[43][43];

void dfs(int x, int y, int cnt)
{
    if (x == r && y == c)
    {
        ans = cnt;
        return;
    }

    a[x][y] = 0;
    
    int up = a[x-1][y], down = a[x+1][y], left = a[x][y-1], right = a[x][y+1];

    int maxa = max(up, max(down, max(left, right)));

    if (up == maxa)
    {
        dfs(x-1, y, cnt + up);
    } else if (down == maxa) {
        dfs(x+1, y, cnt + down);
    } else if (left == maxa) {
        dfs(x, y-1, cnt + left);
    } else if (right == maxa) {
        dfs(x, y+1, cnt + right);
    }
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

    dfs(1, 1, a[1][1]);

    cout << ans << endl;
    return 0;
}