// [CF656D Rosetta Problem] https://www.luogu.org/problemnew/show/CF656D
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int x, y, z;
    cin >> x >> y >> z;

    if (x + z == y && y + z == x) {
        cout << '0' << endl;
    } else if (x + z > y && y + z < x) {
        cout << '+' << endl;
    } else if (x < y + z && x + z < y) {
        cout << '-' << endl;
    } else {
        cout << '?' << endl;
    }
    return 0;
}