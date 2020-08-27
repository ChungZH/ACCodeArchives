// [CF984B Minesweeper] https://www.luogu.com.cn/problem/CF984B
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main()
{
    int n, m;
    cin >> n >> m;

    char a[n+3][m+3];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)   
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '.')
            {
                for (int k = 0; k < 8; k++)
                {
                    int tx = i + dx[k];
                    int ty = j + dy[k];

                    if (tx < 1 || ty < 1 || tx > n || ty > m) continue;
                    if (a[tx][ty] == '*') 
                    {
                        cout << "NO\n";
                        return 0;
                    }
                }
            } else if (a[i][j] <= '9' && a[i][j] >= '0') {
                int cnt = 0;
                for (int k = 0; k < 8; k++)
                {
                    int tx = i + dx[k];
                    int ty = j + dy[k];
                    if (tx < 1 || ty < 1 || tx > n || ty > m) continue;                          
                    if (a[tx][ty] == '*') cnt++;
                }
                if (cnt != a[i][j]-'0') 
                {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }
    cout << "YES\n";
    return 0;
}
