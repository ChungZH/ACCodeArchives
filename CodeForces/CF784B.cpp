// [CF784B Kids' Riddle] https://www.luogu.org/problemnew/show/CF784B
#include <iostream>
using namespace std;

const int a[] = { 1, 0, 0, 0, 1, 0, 1, 0, 2, 1, 1, 2, 0, 1, 0, 0 };

int main()
{
    int n, ans = 0;

    cin >> n;

    if (!n)
        ans++;
    while (n) {
        ans += a[n % 16];
        n /= 16;
    }

    cout << ans << endl;
    return 0;
}
