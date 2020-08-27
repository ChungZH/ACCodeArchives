// [UVa439 骑士的移动 Knight Moves] https://www.luogu.org/problem/UVA439
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

const int dx[] = { 0, -1, 1, 2, 2, -1, 1, -2, -2 };
const int dy[] = { 0, -2, 2, -1, 1, 2, -2, -1, 1 };
const int cti[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

struct horse {
    int x, y, step;
    horse(int a = 0, int b = 0, int c = 0)
        : x(a)
        , y(b)
        , step(c)
    {
    }
};

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    char m[3], n[3];

    while (~scanf("%s %s", n, m)) {
        int x1, y1, x2, y2;
        bool flag = 0;
        bool vis[9][9];
        queue<horse> q;
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                vis[i][j] = 0;
            }
        }
        x1 = cti[n[0] - 'a'];
        y1 = n[1] - '0';
        x2 = cti[m[0] - 'a'];
        y2 = m[1] - '0';
        vis[x1][y1] = 1;
        q.push(horse(x1, y1, 0));
        while (!q.empty()) {
            if (q.front().x == x2 && q.front().y == y2) {
                printf("To get from %s to %s takes %d knight moves.\n", n, m, q.front().step);
                break;
            }
            int tx = q.front().x, ty = q.front().y, ts = q.front().step;
            q.pop();
            for (int i = 1; i <= 8; i++) {
                int nx = tx + dx[i], ny = ty + dy[i], ns = ts + 1;
                if (nx > 0 && ny > 0 && nx < 9 && ny < 9 && !vis[nx][ny]) {
                    vis[nx][ny] = 1;
                    q.push(horse(nx, ny, ns));
                }
            }
        }
    }
    return 0;
}
