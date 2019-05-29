// [P1644 跳马问题] https://www.luogu.org/problemnew/show/P1644
#include <iostream>

using namespace std;

int ans, n, m;
const int dx[] {
    2, 1, -1, -2
},        dy[] {
    1, 2, 2, 1
};

void dfs(int x, int y);

int main()
{
    cin >> n >> m;

    dfs(0, 0);

    cout << ans << endl;
    return 0;
}

void dfs(int x, int y)
{
    if (x == n && y == m)
    {
        ans++;
        return ;
    }

    if (x < 0 || y < 0 || x > n || y > m) return;

    for (int i = 0; i < 4; i++)
    {
        dfs(x + dx[i], y + dy[i]);
    }
}
