// [P2385 青铜莲花池] https://www.luogu.org/problem/P2385
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

struct note {
    int x, y, s;
    note(int a, int b, int c)
        : x(a)
        , y(b)
        , s(c)
    {
    }
};
int m, n, m1, m2;
int sx, sy, ex, ey;
int a[33][33];

int bfs()
{
    const int dxy[8][2] = { { m1, m2 }, { m2, m1 }, { -m1, m2 }, { -m2, m1 }, { m1, -m2 }, { m2, -m1 }, { -m1, -m2 }, { -m2, -m1 } };
    queue<note> q;
    q.push((note) { sx, sy, 0 });

    while (!q.empty()) {
        int tx = q.front().x, ty = q.front().y, ts = q.front().s;
        q.pop();
        if (tx == ex && ty == ey) {
            return ts;
        }
        for (int i = 0; i < 8; i++) {
            int nx = tx + dxy[i][0], ny = ty + dxy[i][1], ns = ts + 1;
            if (nx >= 1 && nx <= m && ny >= 1 && ny <= n && a[nx][ny] != 0 && a[nx][ny] != 2) {
                q.push((note) { nx, ny, ns });
                a[nx][ny] = 2;
            }
        }
    }
}

int main()
{
    cin >> m >> n >> m1 >> m2;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 3) {
                sx = i;
                sy = j;
                a[sx][sy] = 2;
            } else if (a[i][j] == 4) {
                ex = i;
                ey = j;
            }
        }
    }

    cout << bfs() << endl;
    return 0;
}