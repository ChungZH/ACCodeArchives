// [P2777 [AHOI2016初中组]自行车比赛] https://www.luogu.org/problem/P2777
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxx = 0;
    int a[n + 3];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n, [](int a, int b) { return a > b; });

    for (int i = 1; i <= n; i++) {
        maxx = max(maxx, a[i] + i);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] + n >= maxx) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}