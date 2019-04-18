// [SP23847 ACMT - Acm Teams] https://www.luogu.org/problemnew/show/SP23847
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, ans = 0;
        cin >> a >> b;

        while (min(a, b) > 0 && max(a, b) >= 2)
        {
            if (a > b)
            {
                a-=2;
                b--;
            } else {
                b-=2;
                a--;
            }
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
