// [P1443 马的遍历] https://www.luogu.org/problemnew/show/P1443
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int x, y;
    Node(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
};

int n, m, x, y;
const int
    dx[8]
    = { -2, -1, -2, -1, +2, +1, +2, +1 },
    dy[8] = { -1, -2, +1, +2, -1, -2, +1, +2 };

int mapp[405][405];
bool flag[405][405];

void bfs(int x, int y, int step);

int main()
{
    cin >> n >> m >> x >> y;

    memset(mapp, -1, sizeof(mapp));
    memset(flag, false, sizeof(flag));

    bfs(x, y, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("%-5d", mapp[i][j]);
        }
        cout << endl;
    }

    return 0;
}

void bfs(int x, int y, int step)
{
    Node node(x, y);
    mapp[x][y] = step;
    flag[x][y] = true;

    queue<Node> q;

    q.push(node);

    while (!q.empty()) {
        Node top = q.front();

        q.pop();
        for (int i = 0; i < 8; i++) {
            int newX = top.x + dx[i], newY = top.y + dy[i];

            if (newX < 1 || newX > n || newY < 1 || newY > m || flag[newX][newY])
                continue;
            // cout << "newX=" << newX << " newY=" << newY << endl;
            Node newNode(newX, newY);

            q.push(newNode);
            flag[newX][newY] = true;
            mapp[newX][newY] = mapp[top.x][top.y] + 1;
        }
    }
}
