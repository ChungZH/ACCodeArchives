// [P1238 走迷宫] https://www.luogu.org/problem/P1238
#include <algorithm>
#include <iostream>

using namespace std;

bool flag = false;
int m, n;
int stax, stay, endx, endy;
int maze[17][17];
bool b[17][17];
int patch[230][2];
const int d[4][2] = { { 0, -1 }, { -1, 0 }, { 0, 1 }, { 1, 0 } };
void dfs(int x, int y, int step);
void print(int n);

int main()
{
    cin >> m >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> maze[i][j];
        }
    }

    cin >> stax >> stay >> endx >> endy;

    b[stax][stay] = 1;
    dfs(stax, stay, 1);

    if (!flag) {
        cout << "-1\n";
    }
    return 0;
}

void dfs(int x, int y, int step)
{
    patch[step][0] = x, patch[step][1] = y;

    if (x == endx && y == endy) {
        print(step);
        flag = true;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int tx = x + d[i][0], ty = y + d[i][1];
        if (maze[tx][ty] == 0 || b[tx][ty] || tx < 1 || tx > m || ty < 1 || ty > n) {
            continue;
        }
        b[tx][ty] = 1;
        dfs(tx, ty, step + 1);
        b[tx][ty] = 0;
    }
}

void print(int n)
{
    for (int i = 1; i < n; i++) {
        printf("(%d,%d)->", patch[i][0], patch[i][1]);
    }
    printf("(%d,%d)\n", patch[n][0], patch[n][1]);
}