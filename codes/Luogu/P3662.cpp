// [P3662 [USACO17FEB]Why Did the Cow Cross the Road II S] https://www.luogu.org/problemnew/show/P3662
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int a[100005], sum[100005];
int main()
{
    int n, k, b;
    cin >> n >> k >> b;

    for (int i = 1; i <= b; i++) {
        int t;
        cin >> t;
        a[t] = 1;
    }
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i];

    int ans = 9999999;
    for (int i = 1; i <= n - k + 1; i++) {
        ans = min(ans, sum[i + k - 1] - sum[i - 1]);
    }
    cout << ans << endl;
    return 0;
}