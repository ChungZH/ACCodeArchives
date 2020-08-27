// [#10028. 「一本通 1.4 例 3」Knight Moves] https://loj.ac/problem/10028
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int dx[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
const int dy[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
struct node
{
    int x, y, step;
};
queue<node> q;
int n, l;
int sx, sy, ex, ey;
bool f[303][303];
int BFS()
{
    while (!q.empty()) { q.pop(); } // 清空
    f[sx][sy] = 1;
    
    node t, nt;
    t.x = sx; t.y = sy; t.step = 0;
    q.push(t);
    while (!q.empty())
    {
        t = q.front();
        if (t.x == ex && t.y == ey) return t.step;
        for (int i = 0; i < 8; i++)
        {
            int tx, ty, ts;
            tx = t.x + dx[i]; ty = t.y + dy[i]; ts = t.step+1;
            if (tx >= 0 && tx < l && ty >= 0 && ty < l && !f[tx][ty])
            {
                f[tx][ty] = 1;
                nt.x = tx; nt.y = ty; nt.step = ts;
                q.push(nt);
            }
        }
        q.pop();
    }
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> l;
        cin >> sx >> sy >> ex >> ey;
        memset(f, 0, sizeof(f));
        cout << BFS() << endl;
    }
    return 0;
}
