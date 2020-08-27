// [P4445 [AHOI2018初中组]报名签到] https://www.luogu.org/problemnew/show/P4445
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        sum += max(a[i - 1], a[i]);
    cout << sum << endl;
    return 0;
}
