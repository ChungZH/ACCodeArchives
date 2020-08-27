// [CF1132A Regular Bracket Sequence] https://www.luogu.org/problemnew/show/CF1132A
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == d && (c == 0 || a > 0)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
