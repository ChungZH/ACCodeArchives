// [AT1310 Bumble Bee] https://www.luogu.org/problemnew/show/AT1310
#include <iostream>
using namespace std;

int a[1000000];

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x]++;
        if (a[x] > 1)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}