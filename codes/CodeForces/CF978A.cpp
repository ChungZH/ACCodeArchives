// [CF978A Remove Duplicates] https://www.luogu.org/problemnew/show/CF978A
#include <algorithm>
#include <cstdio>

int ans;
int b[51], c[1000];

int main()
{
    int n;
    scanf("%d", &n);

    int a[51];

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = n; i > 0; i--) {
        c[a[i]]++;
        if (c[a[i]] == 1)
            b[++ans] = a[i];
    }

    printf("%d\n", ans);
    for (int i = ans; i > 0; i--) {
        printf("%d ", b[i]);
    }
    return 0;
}
