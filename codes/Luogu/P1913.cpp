// [P1913 L国的战斗之伞兵] https://www.luogu.org/problem/P1913
#include <algorithm>
#include <iostream>

using namespace std;

char a[1003][1003];
bool b[1003][1003];
int ans;
int n, m;

void dfs(int x, int y)
{
    ans++;
    b[x][y] = 1;
    if (a[x - 1][y] == 'd' && !b[x - 1][y])
        dfs(x - 1, y);
    if (a[x + 1][y] == 'u' && !b[x + 1][y])
        dfs(x + 1, y);
    if (a[x][y - 1] == 'r' && !b[x][y - 1])
        dfs(x, y - 1);
    if (a[x][y + 1] == 'l' && !b[x][y + 1])
        dfs(x, y + 1);
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 'o') {
                dfs(i, j);
            }
        }
    }

    cout << ans << endl;

    return 0;
}