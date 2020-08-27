// [CF1114A Got Any Grapes?] https://www.luogu.org/problemnew/show/CF1114A
#include <iostream>
using namespace std;

int main()
{
    int a, d, m, g, p, b;

    cin >> a >> d >> m >> g >> p >> b;

    if (a > g) {
        cout << "NO" << endl;
        return 0;
    } else
        g -= a;

    if (d > g + p) {
        cout << "NO" << endl;
        return 0;
    }

    if (m > g + p + b - d) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}
