// [P1138 第k小整数] https://www.luogu.org/problemnew/show/P1138
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = unique(a, a + n) - a;
    if (k < ans) {
        cout << a[k - 1];
    } else {
        cout << "NO RESULT" << endl;
    }
    return 0;
}
