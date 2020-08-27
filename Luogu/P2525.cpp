// [P2525 Uim的情人节礼物·其之壱] https://www.luogu.org/problemnew/show/P2525
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    prev_permutation(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}
