// [AT2333 Scc Puzzle] https://www.luogu.org/problemnew/show/AT2333
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    if (n * 2 > m) {
        cout << m / 2 << endl;
    } else if (m - n * 2 >= 4) {
        cout << n + (m - n * 2) / 4 << endl;
    } else {
        cout << n << endl;
    }
    return 0;
}