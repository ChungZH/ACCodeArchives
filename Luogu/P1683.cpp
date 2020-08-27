// [P1683 入门] https://www.luogu.org/problem/P1683
#include <algorithm>
#include <iostream>
using namespace std;

int w, h;
int a[21][21];
int stax, stay;
int ans = 0;
const int nexts[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };

void dfs(int x, int y);

int main()
{
    cin >> w >> h;

    char c;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> c;
            if (c == '@') {
                stax = i, stay = j;
                a[i][j] = -1;
            } else if (c == '.') {
                a[i][j] = 1;
            } else {
                a[i][j] = -1;
            }
        }
    }
    dfs(stax, stay);
    cout << ans << endl;
    return 0;
}

void dfs(int x, int y)
{
    ans++;
    for (int i = 0; i < 4; i++) {
        int tx = x + nexts[i][0], ty = y + nexts[i][1];
        if (a[tx][ty] == 1 && tx <= h && tx >= 1 && ty <= w && ty >= 0) {
            a[tx][ty] = -1;
            dfs(x + nexts[i][0], y + nexts[i][1]);
        }
    }
}