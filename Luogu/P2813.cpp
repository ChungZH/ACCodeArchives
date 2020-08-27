// [P2813 母舰] https://www.luogu.com.cn/problem/P2813
#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
int a[100005], b[100005];
int main()
{
    cin >> m >> n;

    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a + m);
    sort(b, b + n);

    int ap = 0, bp = 0;
    while (ap < m) {
        if (bp == n && ap < m) {
            cout << 0 << endl;
            return 0;
        }

        if (a[ap] == 0) {
            ap++;
        } else if (b[bp] > a[ap]) {
            b[bp++] = 0;
            ap++;
        } else {
            bp++;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += b[i];
    }
    cout << ans << endl;
    return 0;
}
