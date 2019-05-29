// [P1234 小A的口头禅] https://www.luogu.org/problemnew/show/P1234
#include <bits/stdc++.h>
using namespace std;

char matrix[1005][1005];

int ans;

int main()
{
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m-3; j++)
        {
            if (matrix[i][j] == 'h' && matrix[i][j+1] == 'e' && matrix[i][j+2] == 'h' && matrix[i][j+3] == 'e')
            {
                ans++;
            }
            
            if (matrix[i][j] == 'e' && matrix[i][j+1] == 'h' && matrix[i][j+2] == 'e' && matrix[i][j+3] == 'h')
            {
                ans++;
            }
        }
    }
    
    for (int i = 1; i <= n-3; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (matrix[i][j] == 'h' && matrix[i+1][j] == 'e' && matrix[i+2][j] == 'h' && matrix[i+3][j] == 'e')
            {
                ans++;
            }
            
            if (matrix[i][j] == 'e' && matrix[i+1][j] == 'h' && matrix[i+2][j] == 'e' && matrix[i+3][j] == 'h')
            {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
