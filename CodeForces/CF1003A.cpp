// [CF1003A Polycarp's Pockets] https://www.luogu.org/problemnew/show/CF1003A
#include <iostream>
#include <algorithm>

using namespace std;

int a[5105];
int n, t, ans = 0;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a[t]++;
        if (a[t] > ans) ans = a[t];
    }

    cout << ans << endl;
    return 0;
}
