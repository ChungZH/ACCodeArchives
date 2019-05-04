// [AT46 リモコン] https://www.luogu.org/problemnew/show/AT46
#include <bits/stdc++.h>
using namespace std;

int a, b, ans = 999999999;
inline void dfs(int x, int step);

int main()
{
    scanf("%d%d", &a, &b);

    dfs(a, 0);

    printf("%d\n", ans);

    return 0;
}

inline void dfs(int x, int step)
{
    if (x == b)
    {
        ans = min(ans, step);
        return ;
    }
    if (step >= ans)
    {
        return ;
    }
    if (x > b)
    {
        dfs(x-1, step+1);
        dfs(x-10, step+1);
        dfs(x-5, step+1);
        
    } else if (x < b) {
        dfs(x+1, step+1);
        dfs(x+10, step+1);
        dfs(x+5, step+1);
        
    }
}
