// [P3131 [USACO16JAN]子共七Subsequences Summing to Sevens] https://www.luogu.org/problemnew/show/P3131
#include <iostream>
#include <algorithm>
using namespace std;
int a[50003], b[50003], f[8];
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
        b[i] %= 7;
    }
    
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!f[b[i]])
        {
            f[b[i]] = i;
        } else {
            ans = max(ans, i - f[b[i]]);
        }
    }

    cout << ans << endl;
    return 0;
}