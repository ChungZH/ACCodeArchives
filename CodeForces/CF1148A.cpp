// [CF1148A Another One Bites The Dust] https://www.luogu.org/problemnew/show/CF1148A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long a, b, c, ans = 0;

    cin >> a >> b >> c;

    long long temp = min(a, b);

    ans += c*2;
    ans += temp * 2;
    
    a -= temp;
    b -= temp;

    if (a || b)
        ans++;

    cout << ans << endl;
    return 0;
}