// [AT1979 BBQ Easy] https://www.luogu.org/problem/AT1979
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    n *= 2;

    int a[n + 3];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = 0;
    for (int i = 0; i < n; i += 2) {
        ans += a[i];
    }

    cout << ans << endl;
    return 0;
}