// [CF545D Queue] https://www.luogu.org/problemnew/show/CF545D
#include <algorithm>
#include <iostream>
using namespace std;

int n;
int a[100005];
long long ans, tim;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (tim <= a[i]) {
            tim += a[i];
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
