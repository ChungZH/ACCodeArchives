// [P1304 哥德巴赫猜想] https://www.luogu.org/problemnew/show/P1304
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if (a == 2)
        return 1;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 4; i <= n; i += 2) {
        for (int j = 2; j <= i; j++) {
            int b = i - j;

            if (b + j == i && isPrime(b) == 1 && isPrime(j) == 1) {
                cout << i << "=" << j << "+" << b << endl;
                break;
            }
        }
    }
    return 0;
}
