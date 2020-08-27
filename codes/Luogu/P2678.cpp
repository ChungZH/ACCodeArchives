// [P2678 跳石头] https://www.luogu.com.cn/problem/P2678
#include <algorithm>
#include <iostream>
using namespace std;
int l, n, m;
int d[50005];
bool check(int x)
{
    int cnt = 0, last = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] - last < x)
            cnt++;
        else
            last = d[i];
    }
    if (l - last < x)
        cnt++;
    return cnt <= m;
}
int main()
{
    cin >> l >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    int L = 1, R = l + 1;
    while (L + 1 < R) {
        int M = (L + R) / 2;

        if (check(M))
            L = M;
        else
            R = M;
    }

    cout << L << endl;
    return 0;
}
