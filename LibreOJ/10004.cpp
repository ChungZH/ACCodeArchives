// [#10004. 「一本通 1.1 例 5」智力大冲浪] https://loj.ac/problem/10004
#include <algorithm>
#include <iostream>
using namespace std;
struct game {
    int t, w;
} a[505];
bool cmp(game a, game b)
{
    return a.w > b.w;
}
bool f[505];
int n, m;
int main()
{
    cin >> m >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i].t;
    for (int i = 0; i < n; i++)
        cin >> a[i].w;

    sort(a, a + n, cmp);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool flag = 0;
        for (int j = a[i].t; j > 0; j--) {
            if (!f[j]) {
                f[j] = 1;
                flag = 1;
                break;
            }
        }
        if (!flag) {
            for (int j = n; j > 0; j--) {
                if (!f[j]) {
                    f[j] = 1;
                    break;
                }
            }
            ans += a[i].w;
        }
    }

    cout << m - ans << endl;
    return 0;
}
