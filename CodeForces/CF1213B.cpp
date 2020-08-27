// [CF1213B Bad Prices] https://www.luogu.com.cn/problem/CF1213B
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int t, n;
int c[150004];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; i++) cin >> c[i];

        int minn = 999999999, ans = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if (c[i] > minn) ans++;
            minn = min(minn, c[i]);
        }
        cout << ans << endl;
        memset(c, 0, sizeof(c));
    }
    
    return 0;
}
