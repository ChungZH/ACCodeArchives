// [AT807 素数、コンテスト、素数] https://www.luogu.org/problemnew/show/AT807
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a;
    cin >> a;
    cout << (isPrime(a) ? "YES" : "NO") << endl;
    return 0;
}
