// [UVA1225 数数字 Digit Counting] https://www.luogu.org/problemnew/show/UVA1225
#include <cctype>
#include <cstdio>
#include <cstring>

int main()
{
    int x, n;
    scanf("%d", &x);

    while (x-- > 0) {
        int buc[10];
        int clen;
        char c[10001];

        memset(buc, 0, sizeof(buc));

        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            memset(c, 0, sizeof(c));
            sprintf(c, "%d", i);
            clen = strlen(c);
            for (int j = 0; j < clen; j++)
                buc[c[j] - '0']++;
        }

        for (int i = 0; i <= 9; i++) {
            if (i != 9)
                printf("%d ", buc[i]);
            else
                printf("%d\n", buc[i]);
        }
    }
    return 0;
}
