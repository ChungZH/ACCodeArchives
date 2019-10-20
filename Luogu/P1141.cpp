// [P1141 01迷宫] https://www.luogu.org/problem/P1141
#include <iostream>
#include <cstring>

using namespace std;

int n, m;
int fd, num;
char a[1003][1003];
int ans[1000003];
int where[1003][1003];
const int dxy[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void dfs(int x, int y)
{
    num++;
    where[x][y] = fd;
    ans[where[x][y]] = num; // 只要不是 -1 就 ok
    
    for (int i = 0; i < 4; i++)
    {
        int tx = x + dxy[i][0], ty = y + dxy[i][1];
        if (a[tx][ty] == a[x][y] || ans[where[tx][ty]] != -1 || tx < 1 || tx > n || ty < 1 || ty > n)
        {
            continue;
        } else {
            dfs(tx, ty);
        }
    }
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n >> m;

    memset(ans, -1, sizeof(ans));
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (ans[where[i][j]] == -1)
            {
                fd++;
                num = 0;
                dfs(i, j);
                ans[fd] = num;
            }
        }
    }
    int ix, iy;
    for (int i = 0; i < m; i++) 
    {
        cin >> ix >> iy;
        cout << ans[where[ix][iy]] << endl;
    }

    return 0;
}