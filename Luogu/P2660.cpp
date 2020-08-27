// [P2660 zzc 种田] https://www.luogu.org/problemnew/show/P2660
#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long x, y;

    scanf("%lld%lld", &x, &y);

    long long ans = 0, minn = min(x, y), maxx = max(x, y);

    while (x && y) {
        ans += 4 * minn * (maxx / minn);
        maxx %= minn;
        x = maxx;
        y = minn;
        maxx = max(x, y);
        minn = min(x, y);
    }

    printf("%lld", ans);

    return 0;
}