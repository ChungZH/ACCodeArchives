// [P4057 [Code+#1]晨跑] https://www.luogu.org/problemnew/show/P4057
#include <iostream>
using namespace std;

inline long long gcd(long long a, long long b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long temp = gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b));

    temp = gcd(temp, c) * (temp / gcd(temp, c)) * (c / gcd(temp, c));

    cout << temp << endl;

    return 0;
}