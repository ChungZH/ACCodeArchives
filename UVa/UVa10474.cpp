// [UVa10474 大理石在哪儿 Where is the Marble?] https://www.luogu.org/problem/UVA10474
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, q, kase = 0, x;
    int a[10000];
    while (scanf("%d%d", &n, &q) == 2 && n)
    {
        printf("CASE# %d:\n", ++kase);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        while (q--)
        {
            scanf("%d", &x);
            int p = lower_bound(a, a+n, x) - a;
            if (a[p] == x) printf("%d found at %d\n", x, p+1);
            else printf("%d not found\n", x);
        }
    }
    return 0;
}