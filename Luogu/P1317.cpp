// [P1317 低洼地] https://www.luogu.com.cn/problem/P1317
#include <bits/stdc++.h>
using namespace std;
int a[10003];
int main()
{
    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == a[i - 1])
            i--, n--;
    }
    for (int i = 1; i < n - 1; i++) {
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}
