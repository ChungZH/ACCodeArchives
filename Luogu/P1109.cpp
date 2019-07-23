// [P1109 学生分组] https://www.luogu.org/problemnew/show/P1109
#include <iostream>
using namespace std;

int main()
{
    int n, L, R;
    cin >> n;

    int sum = 0, a[n+3];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cin >> L >> R;

    if (sum < L * n || sum > R * n)
    {
        cout << -1 << endl;
        return 0;
    }

    int ans1 = 0, ans2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > R) ans1 += a[i] - R;
        else if (a[i] < L) ans2 += L - a[i];
    }
    cout << max(ans1, ans2) << endl;
    return 0;
}