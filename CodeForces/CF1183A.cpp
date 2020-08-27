// [CF1183A Nearest Interesting Number] https://www.luogu.org/problemnew/show/CF1183A
#include <iostream>
using namespace std;

int main()
{
    long long a;
    cin >> a;

    for (long long n = a;; n++) {
        long long s = 0, t = n;
        while (t) {
            s += t % 10;
            t /= 10;
        }
        if (s % 4 == 0) {
            cout << n << endl;
            break;
        }
    }
    return 0;
}