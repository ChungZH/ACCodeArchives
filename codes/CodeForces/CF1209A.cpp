// [CF1209A Paint the Numbers] https://www.luogu.com.cn/problem/CF1209A
#include <algorithm>
#include <iostream>
using namespace std;
int a[103];
bool f[103];
int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (f[i])
            continue;
        ans++;
        for (int j = i + 1; j < n; j++) {
            if (a[j] % a[i] == 0)
                f[j] = 1;
        }
    }

    cout << ans << endl;
    return 0;
}
