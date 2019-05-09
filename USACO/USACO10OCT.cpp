// [[USACO10OCT]湖计数Lake Counting] https://www.luogu.org/problemnew/show/P1596
#include <iostream>
using namespace std;

int n, m, ans;
int a[105][105];
char c;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1},
          dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

inline void dfs     (int x, int y);
inline bool isright (int x, int y);

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c == '.') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                dfs(i, j);
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

inline void dfs(int x, int y)
{
    a[x][y] = 0;

    for (int i = 0; i < 8; i++)
    {
        int tx = x + dx[i], ty = y + dy[i];

        if (isright(tx, ty)) { dfs(tx, ty); }
    }
}

inline bool isright (int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= m || a[x][y] == 0)
    {
        return false;
    }

    return true;
}
