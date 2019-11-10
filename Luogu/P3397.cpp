// [P3397 地毯] https://www.luogu.org/problemnew/show/P3397
#include <iostream>
#include <algorithm>
using namespace std;
int a[1003][1003];
int f[1003][1003];
int main()
{
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= m; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j <= x2; j++)
        {
            f[j][y1]++;
            f[j][y2+1]--;
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            sum += f[i][j];
            a[i][j] = sum;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}