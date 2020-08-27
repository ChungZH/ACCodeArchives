// [#10007. 「一本通 1.1 练习 3」线段] https://loj.ac/problem/10007
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
struct XD
{
    int l, r;
} a[1000000];
bool cmp(XD a, XD b)
{
    return a.r < b.r;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].l >> a[i].r;
    }

    sort(a, a + n, cmp);

    int cur = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].l >= cur)
        {
            ans++;
            cur = a[i].r;
        }
    }

    cout << ans << endl;
    return 0;
}
