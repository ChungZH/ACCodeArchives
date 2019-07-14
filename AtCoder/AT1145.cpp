// [AT1145 ホリドッグ] https://www.luogu.org/problemnew/show/AT1145
#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int x)
{
    if (x == 1) return 0;
    if (x == 2) return 1;

    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;

    cout << (isprime(sum) ? "WANWAN\n" : "BOWWOW\n");
    return 0;
}