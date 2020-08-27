// [P2440 木材加工] https://www.luogu.com.cn/problem/P2440
#include <cstdio>
#include <iostream>
using namespace std;
int n, k, tot;
int a[100005];
bool check(int x)
{
    int t = 0;
    for (int i = 0; i < n; i++) {
        t += a[i] / x;
    }

    return t >= k;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tot += a[i];
    }

    if (tot < k) {
        cout << 0 << endl;
        return 0;
    }

    int L = 1, R = tot + 1;
    while (L + 1 < R) {
        int M = (L + R) / 2;
        if (check(M)) {
            L = M;
        } else {
            R = M;
        }
    }

    cout << L << endl;

    return 0;
}