// [P1216 [IOI1994][USACO1.5]数字三角形 Number Triangles] https://www.luogu.org/problemnew/show/P1216
#include <iostream>

using namespace std;

int n, a[10001][10001];

int main()
{
    
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            a[i][j] += max(a[i+1][j], a[i+1][j+1]);
        }
    }
    
    cout << a[1][1] << endl;

    return 0;
}
