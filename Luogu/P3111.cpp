// [P3111 [USACO14DEC]牛慢跑Cow Jog_Sliver] https://www.luogu.com.cn/problem/P3111
#include <iostream>
#include <algorithm>
using namespace std;
long long n, t, ans = 1;
struct cow
{
    long long s, p, last;
}a[100005];
int main()
{
    cin >> n >> t;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].p >> a[i].s;
        a[i].last = a[i].p + a[i].s*t;
    }

    for (int i = n-1; i >= 1; i--)
    {
        if (a[i].last >= a[i+1].last)
        {
            a[i].last = a[i+1].last;
        } else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
