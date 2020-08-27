// [SP27561 GDCOFTI - Greatest Common Divisor Of Three Integers] https://www.luogu.org/problemnew/show/SP27561
#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y);
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << gcd(a, gcd(b, c)) << endl;
    return 0;
}
int gcd(int x, int y)
{
    return x % y ? gcd(y, x % y) : y;
}
