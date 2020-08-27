// [AT896 幅優先探索] https://www.luogu.org/problem/AT896
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

struct note {
    int x, y, step;
    note(int a, int b, int c)
        : x(a)
        , y(b)
        , step(c)
    {
    }
};
int r, c, sy, sx, gy, gx;
const int dxy[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
char a[55][55];
int bfs()
{
    bool flag = 0;
    queue<note> q;
    q.push((note) { sx, sy, 0 });
    while (!q.empty()) {
        int tx = q.front().x, ty = q.front().y, ts = q.front().step;
        if (tx == gx && ty == gy) {
            return ts;
        }
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = tx + dxy[i][0], ny = ty + dxy[i][1], ns = ts + 1;
            if (nx >= 1 && nx <= r && ny >= 1 && ny <= c && a[nx][ny] != '#') {
                q.push((note) { nx, ny, ns });
                a[nx][ny] = '#';
            }
        }
    }
}

int main()
{
    cin >> r >> c;
    cin >> sx >> sy >> gx >> gy;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> a[i][j];
        }
    }
    a[sx][sy] = '#';
    cout << bfs() << endl;

    return 0;
}