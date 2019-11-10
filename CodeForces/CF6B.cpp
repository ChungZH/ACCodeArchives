// [CF6B President's Office] https://www.luogu.org/problem/CF6B
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, ans = 0;
    char p;
    cin >> n >> m >> p;

    char a[n+3][m+3];
    set<char> s;
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
            if (a[i][j] == p)
            {
                if (a[i][j+1] != p && a[i][j+1] != '.' && j+1 <= m && !s.count(a[i][j+1])) 
                {
                    s.insert(a[i][j+1]);
                    ans++;
                    
                }
                if (a[i+1][j] != p && a[i+1][j] != '.' && i+1 <= n && !s.count(a[i+1][j])) 
                {
                    s.insert(a[i+1][j]);
                    ans++;
                    
                }
                if (a[i][j-1] != p && a[i][j-1] != '.' && j-1 >= 1 && !s.count(a[i][j-1])) 
                {
                    s.insert(a[i][j-1]);
                    ans++;
                }
                if (a[i-1][j] != p && a[i-1][j] != '.' && i-1 >= 1 && !s.count(a[i-1][j])) 
                {
                    s.insert(a[i-1][j]);
                    ans++;
                }
            }
        }
    }


    cout << ans << endl;
    return 0;
}