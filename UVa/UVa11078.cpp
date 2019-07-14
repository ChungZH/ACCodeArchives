// [UVA11078 Open Credit System] https://www.luogu.org/problemnew/show/UVA11078
#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = 999999999;

int main()
{
    int T, n;
    scanf("%d", &T);

    while (T --> 0)
    {
        scanf("%d", &n);
        int val[n];
        int ans = -INF, maxx = -INF;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &val[i]);
            ans = max(ans, maxx - val[i]);
            maxx = max(maxx, val[i]);
        }
        
        printf("%d\n", ans);
    }

    return 0;
}