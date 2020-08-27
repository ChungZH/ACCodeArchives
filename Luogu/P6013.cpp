// [P6013 [CSGRound3]压岁钱] https://www.luogu.com.cn/problem/P6013
#include <iostream>
using namespace std;
long long f[1000006];
int main()
{
    long long m;
    cin >> m;

    long long cnt = 0, ans = 0;
    for (long long i = 1; i <= m; i++) {
        long long t, a, b;
        cin >> t;

        cnt += f[i];
        if (t == 1) {
            cin >> a;
            cnt += a;
        } else if (t == 2) {
            cin >> a;
            if (cnt < a) {
                ans++;
            } else {
                cnt -= a;
            }
        } else if (t == 3) {
            cin >> a >> b;
            cnt -= a;
            f[b] += a;
        }
    }

    cout << ans << endl;
    return 0;
}
