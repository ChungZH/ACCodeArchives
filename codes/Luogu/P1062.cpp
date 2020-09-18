// [P1062 数列] https://www.luogu.com.cn/problem/P1062 #进制
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int k, n;
    cin >> k >> n;

    int a[1000000];
    int i = 0;
    while (n) {
        a[++i] = n % 2;
        n /= 2;
    }

    long long ans = 0;
    for (int j = i; j >= 0; j--) {
        ans += a[j] * pow(k, j - 1);
    }

    cout << ans << endl;
    return 0;
}
