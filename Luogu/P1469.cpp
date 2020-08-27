// [P1469 找筷子] https://www.luogu.org/problemnew/show/P1469
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

    sort(a, a + n);

    for (int i = 0; i < n; i += 2) {
        if (a[i] != a[i + 1]) {
            cout << a[i] << endl;
            break;
        }
    }

    return 0;
}
