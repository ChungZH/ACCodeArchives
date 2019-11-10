// [P1048 采药] https://www.luogu.org/problem/P1048
#include <iostream>
#include <cstring>
#include <algorithm>
#define f(x, y, z) for (long long x = (y), __ = (z); x < __; ++x)
using namespace std;
int m;
int tim[103], num[103];
int ans[1003][103];
int dfs(int t, int pos)
{
    if (ans[t][pos] != -1)
    {
        return ans[t][pos];
    }
    if (pos == m+1)
    {
        return 0;
    }
    int zer, ook = -999999999;
    zer = dfs(t, pos+1);
    if (t >= tim[pos])
    {
        ook = dfs(t-tim[pos], pos+1) + num[pos];
    }
    return ans[t][pos] = max(zer, ook);
}

int main()
{
    memset(ans, -1, sizeof(ans));
    int t;
    cin >> t >> m;
    f(i, 1, m+1)
    {
        cin >> tim[i] >> num[i];
    }

    cout << dfs(t, 0) << endl;

    return 0;
}