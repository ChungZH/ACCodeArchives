// [AT2041 Divide a Cuboid] https://www.luogu.org/problem/AT2041
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
        cout << 0 << endl;
    } else {
        cout << min(min(a * b, b * c), a * c) << endl;
    }
    return 0;
}