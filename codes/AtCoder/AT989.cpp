// [AT989 立方数] https://www.luogu.org/problemnew/show/AT989
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= sqrt(n); i++) {
        if (pow(i, 3) == n) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
