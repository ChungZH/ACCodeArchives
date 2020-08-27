// [#10000. 「一本通 1.1 例 1」活动安排] https://loj.ac/problem/10000
#include <iostream>
#include <algorithm>
using namespace std;
struct atv
{
    int s, f;
};
bool cmp(atv a, atv b)
{
    if (a.f == b.f)
        return a.s > b.s;
    return a.f < b.f;
}
int main()
{
    int n;
    cin >> n;

    atv a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].s >> a[i].f;
    }

    sort(a, a+n, cmp);

    int ans = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].s >= cur)
        {
            ans++;
            cur = a[i].f;
        }
    }

    cout << ans << endl;
    return 0;
}
