// [P3395 路障] https://www.luogu.com.cn/problem/P3395
#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
int n, a[1002][1002], zx[2002], zy[2002];
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0}; 
bool f[1002][1002], flag;
struct node 
{
    int x, y, t;
};

void bfs(int x, int y, int t)
{
    f[x][y] = 1;
    queue<node> q;
    node b, nb;
    b.x = x;
    b.y = y;
    b.t = t;
    q.push(b);
    while (!q.empty())
    {
        b = q.front();
        if (b.x == n && b.y == n)
        {
            flag = 1;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            int tx = b.x+dx[i];
            int ty = b.y+dy[i];
            if (f[tx][ty] == 1 || tx < 1 || tx > n || ty < 1 || ty > n) continue;
            f[tx][ty] = 1;
            nb.x = tx; nb.y = ty; nb.t = b.t+1;
            q.push(nb);
        }
        f[zx[b.t]][zy[b.t]] = 1;
        q.pop();
    }
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        memset(a, 0, sizeof(a));
        memset(f, 0, sizeof(f));
        flag = 0;

        scanf("%d", &n);
        for (int i = 0; i < 2*n-2; i++)
        {
            scanf("%d%d", &zx[i], &zy[i]);
        }

        bfs(1, 1, 0);

        if (flag)        
            printf("Yes\n");
        else 
            printf("No\n");
    }
    return 0;
}
