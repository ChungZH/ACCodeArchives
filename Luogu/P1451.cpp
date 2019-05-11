// [P1451 求细胞数量] https://www.luogu.org/problemnew/show/P1451
#include <iostream>
using namespace std;
inline void dfs(int x, int y);
char c;
int m, n, ans;
int a[100][100];
int main()
{
    cin >> m >> n;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c;
            a[i][j] = c - '1' + 1;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0) { dfs(i, j); ans++;}
        }
    }
    
    cout << ans << endl;
    return 0;
}
inline void dfs(int x, int y)
{
    if (x >= m || x < 0 || y >= n || y < 0 || a[x][y] == 0)
    {
        return ;
    }
    a[x][y] = 0;
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}
