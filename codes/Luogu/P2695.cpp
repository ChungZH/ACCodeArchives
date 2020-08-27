// [P2695 骑士的工作] https://www.luogu.org/problemnew/show/P2695
#include <algorithm>
#include <cstdio>
#include <cstring>

#define MAXN 20005

int main()
{
    int n, m;
    int a[MAXN], b[MAXN];

    while (scanf("%d%d", &n, &m) == 2 && n && m) {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);

        std::sort(a, a + n);
        std::sort(b, b + m);

        int cur = 0, money = 0;

        for (int i = 0; i < m; i++) {
            if (b[i] >= a[cur]) {
                money += b[i];
                if (++cur == n)
                    break;
            }
        }

        if (cur < n) {
            printf("you died!\n");
        } else {
            printf("%d\n", money);
        }
    }
    return 0;
}
