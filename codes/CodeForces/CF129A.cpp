// [CF129A Cookies] https://www.luogu.org/problemnew/show/CF129A
#include <iostream>
using namespace std;

int n, sum, ans;

int main()
{
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = 0; i < n; i++) {
        if ((sum - a[i]) % 2 == 0) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
