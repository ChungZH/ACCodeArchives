// [P1873 砍树] https://www.luogu.com.cn/problem/P1873
#include <cstdio>
#include <iostream>
using namespace std;
long long n, m, maxh;
long long a[1000006];
bool check(long long h)
{
    long long t = 0;
    for (long long i = 0; i < n; i++)
        if (h < a[i])
            t += a[i] - h;

    return t >= m;
}
int main()
{
    cin >> n >> m;
    for (long long i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        maxh = max(maxh, a[i]);
    }

    long long L = 1, R = maxh + 1;
    while (L + 1 < R) {
        long long M = (L + R) / 2;
        if (check(M)) {
            L = M;
        } else {
            R = M;
        }
    }

    cout << L << endl;

    return 0;
}