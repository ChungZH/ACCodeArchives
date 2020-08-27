// [P2524 Uim的情人节礼物·其之弐] https://www.luogu.org/problemnew/show/P2524
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    char a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (prev_permutation(a, a + n))
        ans++;

    cout << ans + 1 << endl;

    return 0;
}
