// [P1157 组合的输出] https://www.luogu.org/problemnew/show/P1157
#include <cstdio>

using namespace std;

int n, r;
int ans[22];
bool book[22];

void dfs(int step)
{
    if (step == r+1)
    {
        for (int i = 1; i <= r; i++)
            printf("%3d", ans[i]);
        putchar('\n');
        return ;
    }
    for (int i = ans[step-1]; i <= n; i++)
    {
        if (!book[i] && i > ans[step-1])
        {
            ans[step] = i;
            book[i] = 1;
            dfs(step+1);
            ans[step] = 0;
            book[i] = 0;
        }
    }
}

int main()
{
    scanf("%d%d", &n, &r);

    ans[1] = 1;
    dfs(1);

    return 0;
}