// [P1075 质因数分解] https://www.luogu.org/problemnew/show/P1075
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2;; i++) {
        if (n % i == 0) {
            cout << n / i << endl;
            break;
        }
    }
    return 0;
}