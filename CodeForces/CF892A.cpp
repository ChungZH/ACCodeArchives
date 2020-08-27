// [CF892A Greed] https://www.luogu.org/problemnew/show/CF892A
#include <algorithm>
#include <iostream>
using namespace std;

int n;
long long cokeSum, a[100000];
long long temp;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        cokeSum += temp;
    }

    for (int j = 0; j < n; j++) {
        cin >> a[j];
    }

    sort(a, a + n);

    if (a[n - 1] + a[n - 2] >= cokeSum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
