// [CF1047A Little C Loves 3 I] https://www.luogu.org/problemnew/show/CF1047A
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 3 == 0) {
        cout << 1 << ' ' << 1 << ' ' << n - 2 << endl;
    } else {
        cout << 1 << ' ' << 2 << ' ' << n - 3 << endl;
    }
    return 0;
}