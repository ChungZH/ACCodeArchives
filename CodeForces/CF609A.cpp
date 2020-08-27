// [CF609A USB Flash Drives] https://www.luogu.org/problem/CF609A
#include <algorithm>
#include <iostream>
#define f(x, y, z) for (long long x = (y), __ = (z); x < __; ++x)
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;

    int a[n + 3];
    f(i, 0, n)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp);

    f(i, 0, n)
    {
        if (m <= 0) {
            break;
        } else {
            ans++;
            m -= a[i];
        }
    }
    cout << ans << endl;
    return 0;
}