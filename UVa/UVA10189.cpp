// [UVA10189 Minesweeper] https://www.luogu.com.cn/problem/UVA10189
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int b[103][103];
int main()
{
    int n, m, kase = 0;
    while (1)
    {
        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0) break;

        if (kase) putchar('\n');

        char a[n+3][m+3];
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '*')
                {
                    b[i-1][j-1]++;
                    b[i-1][j]++;
                    b[i-1][j+1]++;
                    b[i][j-1]++;
                    b[i][j+1]++;
                    b[i+1][j-1]++;
                    b[i+1][j]++;
                    b[i+1][j+1]++;
                }
            }
        }
        printf("Field #%d:\n", ++kase);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] == '*')
                    printf("*");
                else 
                    printf("%d", b[i][j]);
            }
            putchar('\n');
        }
    }
    return 0;
}
