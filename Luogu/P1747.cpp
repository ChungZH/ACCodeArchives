// [P1747 好奇怪的游戏] https://www.luogu.org/problem/P1747
#include <cstring>
#include <fstream>
#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int x;
    int y;
    int step;
    Node(int a, int b, int c)
    {
        x = a;
        y = b;
        step = c;
    };
};
queue<Node> q;

int ans;
const int dx[12] = { 2, 2, -2, -2, -1, -1, 1, 1, -2, -2, 2, 2 };
const int dy[12] = { 2, -2, 2, -2, -2, 2, -2, 2, 1, -1, 1, -1 };
bool b[60][60];

int bfs(int x, int y)
{
    memset(b, 0, sizeof(b));
    q.push(Node(x, y, 0));
    b[x][y] = 1;
    while (!q.empty()) {
        int tx = q.front().x, ty = q.front().y, ts = q.front().step;
        q.pop();

        for (int i = 0; i < 12; i++) {
            int nextx = tx + dx[i], nexty = ty + dy[i];
            if (!b[nextx][nexty] && nextx >= 1 && nexty >= 1) {
                if (nextx == 1 && nexty == 1) {
                    return ts + 1;
                }
                q.push(Node(nextx, nexty, ts + 1));
                b[nextx][nexty] = 1;
            }
        }
    }
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << bfs(x1, y1) << endl;
    while (!q.empty()) {
        q.pop();
    }

    cout << bfs(x2, y2) << endl;
    return 0;
}