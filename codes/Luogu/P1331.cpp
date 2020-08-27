// [P1331 海战] https://www.luogu.org/problem/P1331
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int r, c;
char a[1003][1003];

bool pd(int x, int y)
{
    int cnt = 0;
    if (a[x][y] == '#')
        cnt++;

    if (a[x + 1][y] == '#')
        cnt++;

    if (a[x + 1][y + 1] == '#')
        cnt++;

    if (a[x][y + 1] == '#')
        cnt++;

    if (cnt == 3)
        return 0;
    return 1;
}

void dfs(int x, int y)
{
    if (x < 1 || y < 1 || x > r || y > c || a[x][y] == '.')
        return;
    a[x][y] = '.';
    dfs(x + 1, y);
    dfs(x, y + 1);
    dfs(x - 1, y);
    dfs(x, y - 1);
}

int main()
{
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (i < r && j < c && !pd(i, j)) {
                cout << "Bad placement.\n";
                return 0;
            }
        }
    }

    int ans = 0;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (a[i][j] == '#') {
                ans++;
                dfs(i, j);
            }
        }
    }

    cout << "There are " << ans << " ships.\n";
    return 0;
}