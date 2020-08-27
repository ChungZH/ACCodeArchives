// [UVa524 素数环 Prime Ring Problem] https://www.luogu.org/problem/UVA524
#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int n;
int kase;
int ans[17];
bool vis[17];
const bool isprime[33] = { 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0 };

void dfs(int cur)
{
    if (cur == n && isprime[ans[0] + ans[n - 1]]) {
        for (int i = 0; i < n - 1; i++) {
            cout << ans[i] << ' ';
        }
        cout << ans[n - 1] << endl;
        return;
    }

    for (int i = 2; i <= n; i++) {
        if (!vis[i] && isprime[i + ans[cur - 1]]) {
            ans[cur] = i;
            vis[i] = 1;
            dfs(cur + 1);
            vis[i] = 0;
        }
    }
}

int main()
{
    ans[0] = 1;
    vis[1] = 1;
    while (cin >> n) {
        if (kase) {
            cout << '\n';
        }
        cout << "Case " << ++kase << ':' << endl;
        dfs(1);
    }
    return 0;
}