// [UVa10714 Ants] https://www.luogu.org/problemnew/show/UVA10714
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAXN = 1000000;
int T, L, n;
int x[MAXN];

void solve()
{
    int minT = 0;
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L - x[i]));
    }

    int maxT = 0;
    for (int i = 0; i < n; i++) {
        maxT = max(maxT, max(x[i], L - x[i]));
    }

    printf("%d %d\n", minT, maxT);
}

int main()
{
    scanf("%d", &T);
    while (T-- > 0) {
        scanf("%d%d", &L, &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &x[i]);
        solve();
    }

    return 0;
}